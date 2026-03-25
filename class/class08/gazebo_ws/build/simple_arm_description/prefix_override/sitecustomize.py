import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ssu/robotics-practice/class/class08/gazebo_ws/install/simple_arm_description'
