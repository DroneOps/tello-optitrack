import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from djitellopy import Tello
from scipy.spatial.transform import Rotation as R
import numpy as np
import signal
import sys

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

        #connect to tello
        self.drone = Tello()
        self.drone.connect()
        #wait until is connected

        # Initialize velocities
        self.InercialVel = np.zeros(3)
        self.angularVel = 0
        self.BodyVelocity = np.zeros(3)

        '''desired values and constant'''
        self.Kp = 0.2
        self.kp_z = 1
    
    def signal_handler(self, sig, frame):
        print("\n[!] Ctrl+C detected. Landing..")
        try:
            self.drone.land()
            self.drone.end()
        except Exception as e:
            print(f"Error to land: {e}")
        rclpy.shutdown()
        sys.exit(0)

    def goal_callback(self, msg):
        self.Desired_x = msg.pose.position.x
        self.Desired_y = msg.pose.position.y
        self.Desired_z = msg.pose.position.z
        self.get_logger().info(f"New objective: ({self.Desired_x}, {self.Desired_y}, {self.Desired_z})")

   
    def data_callback(self, msg):
        #get pose
        self.Posex = msg.pose.position.x
        self.Posey = msg.pose.position.y
        self.Posez = msg.pose.position.z

        #get orientation in quaternion
        self.Qx = msg.pose.orientation.x
        self.Qy = msg.pose.orientation.y
        self.Qz = msg.pose.orientation.z
        self.Qw = msg.pose.orientation.w

        if not hasattr(self, 'Desired_x'):
            return 

        if not self.has_taken_off:
            self.drone.takeoff()
            self.has_taken_off = True
            self.get_logger().info("Takeoff executed")
        
        
        #show data
        self.get_logger().info(
            f"Pose: ({self.Posex:.3f}, {self.Posey:.3f}, {self.Posez:.3f}) "
            f"Quat: ({self.Qx:.3f}, {self.Qy:.3f}, {self.Qz:.3f}, {self.Qw:.3f})"
        )

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
        # Convert quaternion to Euler angles
        self.roll, self.pitch, self.yaw = R.from_quat([self.Qx, self.Qy, self.Qz, self.Qw]).as_euler('xyz', degrees=False)

        #convert to matrix
        self.P = np.array([
            self.Posex,
            self.Posey,
            self.Posez
        ])
        
        #desired Matrix
        self.desired_P = np.array([
            self.Desired_x,
            self.Desired_y,
            self.Desired_z
        ])

         #inverse rotation matrix
        self.Re_inv = np.array([
            [np.cos(self.yaw), np.sin(self.yaw), 0],
            [-np.sin(self.yaw),  np.cos(self.yaw), 0],
            [0,                0,               1]
        ])

        #calculate error
        self.Pe = self.P - self.desired_P 
       

    '''calculate inercial velocity'''
    def calculateVelocities(self):
        
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

        scale = 20
        vx = int(np.clip(self.BodyVelocity[0]*scale, -100, 100))
        vy = int(np.clip(self.BodyVelocity[1]*scale, -100, 100))
        vz = int(np.clip(self.BodyVelocity[2]*scale, -100, 100))
        self.drone.send_rc_control(vx, vy, vz, self.angularVel) 


    def LandIfDesired(self):
        tol_ratio = 0.90 # Land the drone once it has reached at least precision_threshold (82%) of the target position.
        x_ok = abs(self.P[0] - self.Desired_x) <= (1 - tol_ratio) * abs(self.Desired_x) or self.Desired_x == 0
        y_ok = abs(self.P[1] - self.Desired_y) <= (1 - tol_ratio) * abs(self.Desired_y) or self.Desired_y == 0
        z_ok = abs(self.P[2] - self.Desired_z) <= (1 - tol_ratio) * abs(self.Desired_z) or self.Desired_z == 0


        if x_ok and y_ok and z_ok:
            self.get_logger().warn(f"Close enough (~90%). Landing...")
            self.drone.land()
            self.has_taken_off = False

def main(args=None):
    rclpy.init(args=args)
    node = CinematicControl()

    # Register signal
    signal.signal(signal.SIGINT, lambda sig, frame: node.signal_handler(sig, frame))

    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__== '__main__':
    main()