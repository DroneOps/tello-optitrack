import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, TwistStamped
from djitellopy import Tello
from scipy.spatial.transform import Rotation as R
import numpy as np

class CinematicControl(Node):
    def __init__(self):
        super().__init__('cinematic_control')

        # Publishers for logging
        self.pose_pub = self.create_publisher(PoseStamped, '/drone/pose_log', 10)
        self.vel_pub = self.create_publisher(TwistStamped, '/drone/vel_log', 10)

        # Subscriber to OptiTrack data
        self.subscription = self.create_subscription(
            PoseStamped, '/drone/pose', self.data_callback, 10
        )

        # Connect to Tello
        self.drone = Tello()
        self.drone.connect()
        self.drone.takeoff()  # Takeoff

        # Desired pose
        self.Desired_x = -1.50
        self.Desired_y = 2.60
        self.Desired_z = -1.00

        # Control gain
        self.Kp = 0.40

    def data_callback(self, msg):
        # Get pose
        self.Posex = msg.pose.position.x
        self.Posey = msg.pose.position.y
        self.Posez = msg.pose.position.z

        # Get orientation
        self.Qx = msg.pose.orientation.x
        self.Qy = msg.pose.orientation.y
        self.Qz = msg.pose.orientation.z
        self.Qw = msg.pose.orientation.w

        # Show data
        self.get_logger().info(
            f"Pose: ({self.Posex:.3f}, {self.Posey:.3f}, {self.Posez:.3f}) "
            f"Quat: ({self.Qx:.3f}, {self.Qy:.3f}, {self.Qz:.3f}, {self.Qw:.3f})"
        )

        # Control calculations
        self.control_variables()
        self.calculateVelocities()
        self.sendDataToTello()
        self.LandIfDesired()

        # Publish pose
        pose_msg = PoseStamped()
        pose_msg.header.stamp = self.get_clock().now().to_msg()
        pose_msg.header.frame_id = "world"
        pose_msg.pose.position.x = self.Posex
        pose_msg.pose.position.y = self.Posey
        pose_msg.pose.position.z = self.Posez
        pose_msg.pose.orientation.x = self.Qx
        pose_msg.pose.orientation.y = self.Qy
        pose_msg.pose.orientation.z = self.Qz
        pose_msg.pose.orientation.w = self.Qw
        self.pose_pub.publish(pose_msg)

        # Publish velocity
        vel_msg = TwistStamped()
        vel_msg.header.stamp = self.get_clock().now().to_msg()
        vel_msg.header.frame_id = "world"
        vel_msg.twist.linear.x = self.BodyVelocity[0]
        vel_msg.twist.linear.y = self.BodyVelocity[1]
        vel_msg.twist.linear.z = self.BodyVelocity[2]
        vel_msg.twist.angular.z = self.angularVel
        self.vel_pub.publish(vel_msg)

    def control_variables(self):
        # Convert quaternion to Euler angles
        self.roll, self.pitch, self.yaw = R.from_quat(
            [self.Qx, self.Qy, self.Qz, self.Qw]
        ).as_euler('xyz', degrees=False)

        # Current and desired positions
        self.P = np.array([self.Posex, self.Posey, self.Posez])
        self.desired_P = np.array([self.Desired_x, self.Desired_y, self.Desired_z])

        # Inverse rotation for body frame
        self.Re_inv = np.array([
            [np.cos(self.yaw), np.sin(self.yaw), 0],
            [-np.sin(self.yaw), np.cos(self.yaw), 0],
            [0, 0, 1]
        ])

        # Position error
        self.Pe = self.P - self.desired_P

        # Yaw error
        self.Desired_yaw = 0
        self.Yaw_error = self.yaw - self.Desired_yaw
        if self.Yaw_error > np.pi:
            self.Yaw_error -= 2 * np.pi
        elif self.Yaw_error < -np.pi:
            self.Yaw_error += 2 * np.pi

    def calculateVelocities(self):
        self.InercialVel = -self.Kp * self.Pe
        self.angularVel = -self.Kp * self.Yaw_error
        self.BodyVelocity = self.Re_inv @ self.InercialVel

    def sendDataToTello(self):
        linear_scale = 100.0
        angular_scale = 57.3

        vx = int(np.clip(self.BodyVelocity[0] * linear_scale, -100, 100))
        vy = int(np.clip(self.BodyVelocity[1] * linear_scale, -100, 100))
        vz = int(np.clip(self.BodyVelocity[2] * linear_scale, -100, 100))
        Yv = int(np.clip(self.angularVel * angular_scale, -100, 100))

        self.drone.send_rc_control(lr=vy, fb=vx, ud=vz, yaw=Yv)

    def LandIfDesired(self):
        tol = 0.20
        if (abs(self.Pe[0]) < tol and abs(self.Pe[1]) < tol and abs(self.Pe[2]) < tol):
            self.get_logger().info("Landing...")
            self.drone.land()

def main(args=None):
    rclpy.init(args=args)
    node = CinematicControl()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

