from setuptools import find_packages
from setuptools import setup

setup(
    name='natnet_ros2_py',
    version='1.0.0',
    packages=find_packages(
        include=('natnet_ros2_py', 'natnet_ros2_py.*')),
)
