from setuptools import find_packages
from setuptools import setup

setup(
    name='orange_robot_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('orange_robot_interfaces', 'orange_robot_interfaces.*')),
)
