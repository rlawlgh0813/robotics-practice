from launch import LaunchDescription
from launch.actions import RegisterEventHandler, LogInfo, EmitEvent
from launch.events import Shutdown
from launch.event_handlers import OnProcessStart, OnProcessExit
from launch_ros.actions import Node


def generate_launch_description():
    turtlesim = Node(
        package='turtlesim',
        executable='turtlesim_node',
        name='turtlesim'
    )

    speed_ctrl = Node(
        package='multi_turtle_launch',
        executable='speed_controller',
        name='speed_ctrl'
    )

    on_start_handler = RegisterEventHandler(
        OnProcessStart(
            target_action=speed_ctrl,
            on_start=[
                LogInfo(msg='속도 제어 노드 시작!')
            ]
        )
    )

    on_exit_handler = RegisterEventHandler(
        OnProcessExit(
            target_action=turtlesim,
            on_exit=[
                LogInfo(msg='터틀심 종료 -> 시스템 종료'),
                EmitEvent(event=Shutdown(reason='터틀심 창 닫힘'))
            ]
        )
    )

    return LaunchDescription([
        turtlesim,
        speed_ctrl,
        on_start_handler,
        on_exit_handler,
    ])