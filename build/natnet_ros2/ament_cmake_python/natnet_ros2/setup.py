from setuptools import find_packages
from setuptools import setup

setup(
    name='natnet_ros2',
    version='1.0.0',
    packages=find_packages(
        include=('natnet_ros2', 'natnet_ros2.*')),
)
