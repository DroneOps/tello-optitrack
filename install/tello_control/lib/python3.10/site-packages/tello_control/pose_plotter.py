import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from scipy.spatial.transform import Rotation as R
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import time

class PosePlotter(Node):
    def __init__(self):
        super().__init__('pose_plotter')
        self.subscription = self.create_subscription(PoseStamped, '/drone/pose', self.callback, 10)

         #suscriber to goal topic 
        self.goal_sub = self.create_subscription(
            PoseStamped, "/goal", self.goal_callback, 10
        )

        self.x, self.y, self.z, self.yaw, self.t = [], [], [], [], []
        self.start_time = time.time()
        self.get_logger().info('Ready to Plot.')

    def callback(self, msg):
        self.x.append(msg.pose.position.x)
        self.y.append(msg.pose.position.y)
        self.z.append(msg.pose.position.z)

        # Cuaternión → yaw
        r = R.from_quat([
            msg.pose.orientation.x,
            msg.pose.orientation.y,
            msg.pose.orientation.z,
            msg.pose.orientation.w
        ])
        yaw = r.as_euler('xyz', degrees=False)[2]
        self.yaw.append(yaw)

        self.t.append(time.time() - self.start_time)
        
    def goal_callback(self, msg):
        self.Desired_x = msg.pose.position.x
        self.Desired_y = msg.pose.position.y
        self.Desired_z = msg.pose.position.z

    def plot(self):
        # ---- Figura 1: variables vs tiempo ----
        plt.figure(figsize=(10, 8))
        plt.subplot(4, 1, 1); plt.plot(self.t, self.x, label='x'); plt.grid(); plt.legend()
        plt.subplot(4, 1, 2); plt.plot(self.t, self.y, label='y'); plt.grid(); plt.legend()
        plt.subplot(4, 1, 3); plt.plot(self.t, self.z, label='z'); plt.grid(); plt.legend()
        plt.subplot(4, 1, 4); plt.plot(self.t, self.yaw, label='yaw'); plt.grid(); plt.legend()
        plt.xlabel('Tiempo [s]')
        plt.tight_layout()

        # ---- Figura 2: trayectoria 3D ----
        fig = plt.figure()
        ax = fig.add_subplot(111, projection='3d')
        ax.plot(self.x, self.y, self.z, color='blue', label='Trayectoria')
        ax.scatter(self.x[0], self.y[0], self.z[0], color='green', label='Inicio')
        ax.scatter(self.Desired_x, self.Desired_y, self.Desired_z, color='black', label='Deseado')
        ax.scatter(self.x[-1], self.y[-1], self.z[-1], color='red', label='Fin')
        ax.set_xlabel('X [m]')
        ax.set_ylabel('Y [m]')
        ax.set_zlabel('Z [m]')
        ax.legend()
        ax.set_title('Trayectoria 3D del dron')
        plt.show()


def main(args=None):
    rclpy.init(args=args)
    node = PosePlotter()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.plot()
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
