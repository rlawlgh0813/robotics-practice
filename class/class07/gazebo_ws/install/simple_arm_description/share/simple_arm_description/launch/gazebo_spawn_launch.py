import os
import re
import xacro

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction, RegisterEventHandler
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node


def generate_launch_description():
    pkg = "simple_arm_description"
    pkg_share = get_package_share_directory(pkg)

    urdf_path = os.path.join(pkg_share, "urdf", "simple_arm.urdf.xacro")

    # Gazebo Classic 실행
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("gazebo_ros"),
                "launch",
                "gazebo.launch.py",
            )
        )
    )

    # xacro -> robot_description
    robot_desc = xacro.process_file(urdf_path).toxml()

    # XML 주석만 제거
    robot_desc = re.sub(r'<!--.*?-->', '', robot_desc, flags=re.DOTALL)

    rsp = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="screen",
        parameters=[{
            "robot_description": robot_desc,
            "use_sim_time": True,
        }],
    )

    spawn = Node(
        package="gazebo_ros",
        executable="spawn_entity.py",
        output="screen",
        arguments=[
            "-entity", "simple_arm",
            "-topic", "robot_description",
            "-x", "0.0", "-y", "0.0", "-z", "0.0",
        ],
    )

    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        output="screen",
        arguments=[
            "joint_state_broadcaster",
            "--controller-manager", "/controller_manager",
        ],
    )

    effort_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        output="screen",
        arguments=[
            "effort_controller",
            "--controller-manager", "/controller_manager",
        ],
    )

    arm_sequencer = Node(
        package='simple_arm_description',
        executable='arm_sequencer',
        output='screen',
    )

    # spawn 완료 후 순서대로 컨트롤러 로드
    load_controllers = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=spawn,
            on_exit=[
                joint_state_broadcaster_spawner,
                effort_controller_spawner,
            ],
        )
    )

    return LaunchDescription([
        gazebo,
        rsp,
        TimerAction(period=5.0, actions=[spawn]),
        load_controllers,
    ])