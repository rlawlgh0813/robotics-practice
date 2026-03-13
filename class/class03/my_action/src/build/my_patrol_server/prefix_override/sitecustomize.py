import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ssu/robotics-practice/week/week03/my_action/src/install/my_patrol_server'
