import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from djitellopy import Tello
from scipy.spatial.transform import Rotation as R
import numpy as np

class CinematicControl(Node):
    def __init__(self):
        super().__init__('cinematic_control')
        
        #ros2 suscriber to optitrack data
        self.subscription = self.create_subscription(
            PoseStamped, '/drone/pose', #topic name from natnet_ros2 package
            self.data_callback,
            10
        )
        #connect to tello
        self.drone = Tello()
        self.drone.connect()
        #wait until is connected
        self.drone.takeoff() #takeoff 

        '''desired values and constant'''
        self.Desired_x = -1.50
        self.Desired_y = 2.60 #y is the height
        self.Desired_z = -1.00

        self.Kp = 0.40
        "'''"
   
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
        self.Desired_yaw = 0
        #np.arctan2(self.P[0] ,self.P[2])
        #self.Yaw_error = (self.yaw - self.Desired_yaw + np.pi) % (2 * np.pi) - np.pi #to be sure is between -pi and pi
        self.Yaw_error = self.yaw - self.Desired_yaw
        if self.Yaw_error>np.pi:
            self.Yaw_error = self.Yaw_error-2*np.pi
        elif self.Yaw_error<-np.pi:
            self.Yaw_error = self.Yaw_error+2*np.pi


    '''calculate inercial velocity and angular velocity'''
    def calculateVelocities(self):
        self.InercialVel =  -self.Kp * self.Pe
        self.angularVel = -self.Kp * self.Yaw_error

        self.BodyVelocity = self.Re_inv @ self.InercialVel
    
    '''send data to tello overwriting the rc'''
    def sendDataToTello(self):
        scale = 30.0  #scale to map from -100 to 100
        vx = int(np.clip(self.BodyVelocity[0] * scale, -100, 100))
        vy = int(np.clip(self.BodyVelocity[1] * scale, -100, 100))
        vz = int(np.clip(self.BodyVelocity[2] * scale, -100, 100))
        Yv = int(np.clip(self.angularVel * scale, -100, 100))
        self.drone.send_rc_control(-vx, vz, vy, Yv) #as y is the height we send it like this


    def LandIfDesired(self):
        self.get_logger().info("Checking if it is possible to land")
        tol = 0.20 # tolerance
        if (abs(self.Pe[0]) < tol
            and self.Pe[1] < tol
            and self.Pe[2] < tol):
            self.get_logger().info("Landing...")
            self.drone.land()  # land if the pose is close enough

def main(args=None):
    rclpy.init(args=args)
    node = CinematicControl()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__== '__main__':
    main()