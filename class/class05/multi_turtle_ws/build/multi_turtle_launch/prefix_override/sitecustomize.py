import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ssu/robotics-practice/class/class05/multi_turtle_ws/install/multi_turtle_launch'
