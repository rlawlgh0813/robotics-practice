from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, TimerAction, ExecuteProcess, LogInfo
from launch.substitutions import LaunchConfiguration, FindExecutable, TextSubstitution
from launch_ros.actions import Node


def generate_launch_description():
    bg_r_arg = DeclareLaunchArgument(
        'bg_r',
        default_value = TextSubstitution(text='69')
    )

    bg_r_val = LaunchConfiguration('bg_r')


    turtle_a = Node(
        package='turtlesim',
        namespace='turtle_a',
        executable='turtlesim_node',
        name='sim'
    )

    turtle_b = Node(
        package='turtlesim',
        namespace='turtle_b',
        executable='turtlesim_node',
        name='sim'
    )

    change_bg = TimerAction(
        period=3.0,
        actions=[
            ExecuteProcess(
                cmd=[[
                    FindExecutable(name='ros2'),
                    ' param set /turtle_a/sim background_r ',
                    bg_r_val
                ]],
                shell=True
            )
        ]
    )

    log_msg = LogInfo(msg='거북이 노드 실행 완료!')

    return LaunchDescription([
        bg_r_arg,
        turtle_a,
        turtle_b,
        change_bg,
        log_msg,
    ])