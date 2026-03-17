import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from djitellopy import Tello # Library to control the Tello drone, it is a wrapper around the official SDK of the drone that allows us to send commands to the drone and receive data from it.
from scipy.spatial.transform import Rotation as R
import numpy as np
import signal
import sys

'''This script is used to control the Tello drone in a cinematic way, it receives the current position and orientation of the drone from the OptiTrack motion capture system
 through the /drone/pose topic, and it receives the desired position from the user input through the /goal topic. 
 The script uses a simple proportional controller to calculate the velocity that the drone should have in order to reach the desired position, 
 and it sends this velocity to the drone using the send_rc_control method of the djitellopy library. 
 Rotation Matrix is used to transform the velocity from the inertial frame to the body frame of the drone, which is the frame that the drone uses to control its movement.'''

class CinematicControl(Node):
    def __init__(self):
        super().__init__('cinematic_control')
        #flag
        self.has_taken_off = False

        #ros2 suscriber to optitrack data
        self.subscription = self.create_subscription(
            PoseStamped, '/drone/pose', #topic name from natnet_ros2 package
            self.data_callback,
            10
        )
        #suscriber to goal topic 
        self.goal_sub = self.create_subscription(
            PoseStamped, "/goal", self.goal_callback, 10
        )

        #connect to tello drone from the djitellopy library
        self.drone = Tello()
        self.drone.connect()
        #wait until is connected

        # Initialize velocities
        self.InercialVel = np.zeros(3)
        self.angularVel = 0
        self.BodyVelocity = np.zeros(3)

        '''desired values and constant'''
        self.Kp = 0.5
        self.kp_z = 1
    
    def signal_handler(self, sig, frame):
        # Handle Ctrl+C signal to land the drone safely and shutdown ROS2
        print("\n[!] Ctrl+C detected. Landing..")
        try:
            self.drone.land()
            self.drone.end()
        except Exception as e:
            print(f"Error to land: {e}")
        rclpy.shutdown()
        sys.exit(0)

    def goal_callback(self, msg):
        #capture the desired position from the goal topic from the user input
        self.Desired_x = msg.pose.position.x
        self.Desired_y = msg.pose.position.y
        self.Desired_z = msg.pose.position.z
        self.get_logger().info(f"New objective: ({self.Desired_x}, {self.Desired_y}, {self.Desired_z})") #log the new goal for debugging purposes

   
    def data_callback(self, msg):
        '''callback function to capture the current position and orientation of the drone from optitrack data'''
        self.Posex = msg.pose.position.x
        self.Posey = msg.pose.position.y
        self.Posez = msg.pose.position.z

        #get orientation in quaternion format
        #this is the format that optitrack gives us, but we will convert it to euler angles later for the control loop
        self.Qx = msg.pose.orientation.x
        self.Qy = msg.pose.orientation.y
        self.Qz = msg.pose.orientation.z
        self.Qw = msg.pose.orientation.w

        if not hasattr(self, 'Desired_x'):
            return 

        if not self.has_taken_off:
            #takeoff the drone if it has not taken this is the first time we receive data and we have a goal
            #this is done to avoid taking off before we have a goal and to ensure that we have the initial position of the drone before taking off
            self.drone.takeoff()
            self.has_taken_off = True
            self.get_logger().info("Takeoff executed")
        
        
        #log the current pose and orientation of the drone for debugging purposes
        self.get_logger().info(
            f"Pose: ({self.Posex:.3f}, {self.Posey:.3f}, {self.Posez:.3f}) "
            f"Quat: ({self.Qx:.3f}, {self.Qy:.3f}, {self.Qz:.3f}, {self.Qw:.3f})"
        )


        '''Principal control loop'''
        #calculate variables
        self.control_variables()
        #calculate velocity
        self.calculateVelocities()
        #send data after processing
        self.sendDataToTello()
        #check if it is close enough to land 
        self.LandIfDesired()

    '''control variables'''
    def control_variables(self):
        # Convert quaternion to Euler angles to get the yaw angle of the drone, which is needed for the control loop. 
        self.roll, self.pitch, self.yaw = R.from_quat([self.Qx, self.Qy, self.Qz, self.Qw]).as_euler('xyz', degrees=False)
        #convert to matrix form for easier calculations
        self.P = np.array([
            self.Posex,
            self.Posey,
            self.Posez
        ])
        
        #desired Matrix for the control loop
        self.desired_P = np.array([
            self.Desired_x,
            self.Desired_y,
            self.Desired_z
        ])

         #inverse rotation matrix to transform from inertial frame to body frame based on the current yaw angle of the drone
         #  we only consider the yaw angle for the rotation since the drone is assumed to be always parallel to the ground (no roll and pitch)
         #  and we want to control the velocity in the horizontal plane (x and y) and the vertical velocity (z) independently.
        self.Re_inv = np.array([
            [np.cos(self.yaw), np.sin(self.yaw), 0],
            [-np.sin(self.yaw),  np.cos(self.yaw), 0],
            [0,                0,               1]
        ])

        #calculate error
        self.Pe = self.P - self.desired_P 
       

    '''calculate inercial velocity'''
    def calculateVelocities(self):
        #the inercial velocity is calculated in the inertial frame and then transformed to the body frame using the inverse rotation matrix
        #the body velocity is the one that is sent to the drone, so we need to transform it to the body frame
        self.InercialVel = np.array([
        -self.Kp * self.Pe[0],
        -self.Kp * self.Pe[1],
        -self.kp_z * self.Pe[2]
        ])

        self.BodyVelocity = self.Re_inv @ self.InercialVel
    
    '''send data to tello overwriting the rc'''
    def sendDataToTello(self):
        self.get_logger().info(
        f"Pe: {self.Pe}, InercialVel: {self.InercialVel}, BodyVel: {self.BodyVelocity}"
        )
        #we use a scale factor to convert the velocity from m/s to the range of -100 to 100 that the tello accepts for rc control. We also clip the values to ensure they are within the acceptable range.

        scale = 20
        vx = int(np.clip(self.BodyVelocity[0]*scale, -100, 100))
        vy = int(np.clip(self.BodyVelocity[1]*scale, -100, 100))
        vz = int(np.clip(self.BodyVelocity[2]*scale, -100, 100))
        self.drone.send_rc_control(vx, vy, vz, self.angularVel) 


    def LandIfDesired(self):
        tol_ratio = 0.80 # Land the drone once it has reached at least precision_threshold (90%) of the target position.
        #this is done due to the fact that the drone may not be able to reach the exact position due to the control loop and the dynamics of the drone, so we allow it to land once it is close enough to the target position. 
        # This is a common practice in control systems to avoid oscillations around the target position and to ensure a smooth landing.

        x_ok = abs(self.P[0] - self.Desired_x) <= (1 - tol_ratio) * abs(self.Desired_x) or self.Desired_x == 0
        y_ok = abs(self.P[1] - self.Desired_y) <= (1 - tol_ratio) * abs(self.Desired_y) or self.Desired_y == 0
        z_ok = abs(self.P[2] - self.Desired_z) <= (1 - tol_ratio) * abs(self.Desired_z) or self.Desired_z == 0

        #log the distance to the target position for debugging purposes
        self.get_logger().info(
            f"Distance to target: x: {abs(self.P[0] - self.Desired_x):.3f}, y: {abs(self.P[1] - self.Desired_y):.3f}, z: {abs(self.P[2] - self.Desired_z):.3f}"
        )
        if x_ok and y_ok and z_ok:
            self.get_logger().warn(f"Close enough (~80%). Landing...")
            self.drone.land() #send land command to the drone
            self.has_taken_off = False #reset the flag to allow taking off again if a new goal is received after landing

def main(args=None):
    '''main function to run the node'''
    rclpy.init(args=args)
    node = CinematicControl()

    # Handle Ctrl+C signal to land the drone safely and shutdown ROS2
    signal.signal(signal.SIGINT, lambda sig, frame: node.signal_handler(sig, frame)) 
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__== '__main__':
    main()