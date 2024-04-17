from setuptools import find_packages, setup
import os
from glob import glob
package_name = 'llm_ros2'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*.launch.py'))),
        (os.path.join('share', package_name, 'urdf'), glob(os.path.join('urdf', '*.*'))),
        (os.path.join('share', package_name, 'meshes'), glob(os.path.join('meshes', '*.*'))),
        (os.path.join('share', package_name, 'urdf/sensors'), glob(os.path.join('urdf/sensors', '*.*'))),
        (os.path.join('share', package_name, 'worlds'), glob(os.path.join('worlds', '*.*'))),   
        (os.path.join('share', package_name, 'rviz'), glob(os.path.join('rviz', '*.rviz'))),
        (os.path.join('share', package_name, 'config'), glob(os.path.join('config', '*.yaml'))),

    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='csg',
    maintainer_email='csg@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'sub_pose = llm_ros2.sub_pose:main',
            'camera_server = llm_ros2.camera_server:main',
            'ctl_robot     = llm_ros2.control_robot:main',
            'monitor_joint = llm_ros2.monitor_joint:main',
            'calculate_matrix = llm_ros2.calculate_matrix:main',
            'instru_receive = llm_ros2.instru_receive:main',
            'sub_world_object = llm_ros2.sub_world_object:main'
        ],
    },
)
