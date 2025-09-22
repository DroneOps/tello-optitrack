import rclpy
from rclpy.node import Node
import tellopy
from geometry_msgs.msg import TwistStamped
from std_srvs.srv import Trigger


class TelloData(Node):
    def __init__(self):
        super().__init__('tello_data')

       
        # Connect to Tello
        self.cli = self.create_client(Trigger, 'Tello/init')

        while not self.cli.wait_for_service(timeout_sec=1.0):
             self.get_logger().info('Connecting ...')

        req = Trigger.Request()
        future = self.cli.call_async(req)

         # ros2 publisher

        self.publisher = self.create_publisher(TwistStamped, 'Tello/Velocity', 10)
        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)
         
        self.vx = 0.0
        self.vy = 0.0
  
        rclpy.spin_until_future_complete(self, future)

        if future.result() is not None:
            response = future.result()
            if response.success:
                self.get_logger().info(f"{response.message}")
            else: self.get_logger().warn(f"{response.message}")
        else: self.get_logger().error("Service Failed")

        # Subscribe to telemetry
        tello = tellopy.Tello()
        self.tello.subscribe(self.tello.EVENT_FLIGHT_DATA, self.flight_data_handler)
    
    def timer_callback(self):
        msg = TwistStamped()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.twist.linear.x = self.vx
        msg.twist.linear.y = self.vy

        self.publisher.publish(msg)
        self.get_logger().info(
            f"Publishing velocity -> x:{self.vx:.2f}, y:{self.vy:.2f}"
        )

    def flight_data_handler(self, event, sender, data, **kwargs): # kwargs to call extra arguments just in case
        self.vx = float(data.north_speed)
        self.vy = float(data.east_speed)


    def get_speed_x(self) -> float:
        """X-axis velocity (cm/s)"""
        return self.vx

    def get_speed_y(self) -> float:
        """Y-axis velocity (cm/s)"""
        return self.vy

def main(args = None):
        rclpy.init(args=args)
        node = TelloData()
        rclpy.spin(node)

        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__': 
    main()