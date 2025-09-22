import rclpy
from rclpy.node import Node
import tellopy
from std_srvs.srv import Trigger

class TelloInit(Node):
    def __init__(self):
        super().__init__('tello_init')

        self.srv = self.create_service(Trigger, 'Tello/init', self.handle_init)

        self.connected = False
        try:
            self.drone = tellopy.Tello()
            self.drone.connect()
            self.drone.wait_for_connection(60.0)
            self.connected = True
            self.get_logger().info("Connected to Tello!")
            self.drone.subscribe(self.drone.EVENT_FLIGHT_DATA, self.flight_data_handler)
        except Exception as e:
            self.get_logger().error(f"Cannot connect to Tello: {e}")

    def flight_data_handler(self, event, sender, data):
        self.battery = data.battery_percentage

    def handle_init(self, request, response):
        if self.connected:
            response.success = True
            response.message = f"Battery: {self.battery}%"
        else:
            response.success = False
            response.message = "Not connected"
        return response


def main(args=None):
    rclpy.init(args=args)
    node = TelloInit()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
