from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Nodo de control cinemático del dron
        Node(
            package='tello_control',
            executable='cinematic_control',
            name='cinematic_control',
            output='screen'
        ),

        # Nodo de visualización / plotter
        Node(
            package='tello_control',
            executable='pose_plotter',
            name='pose_plotter',
            output='screen'
        ),
    ])
