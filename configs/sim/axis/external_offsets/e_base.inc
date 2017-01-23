# Notes:
# 1) Immediate homing herein
#    ([JOINT_*]HOME_SEQUENCE=0, other HOME_* items omitted)
# 2) [AXIS_n]OFFSET_AV_RATIO= controls external offsets a,v
#     Allowed values are 0.0 <= OFFSET_AV_RATIO <= 0.9
#     Value of 0.0 disables external offsets
#     Disallowed values are superseded with msg to stdout

[EMC]
VERSION = 1.0

[DISPLAY]
PYVCP = e_display.xml
DISPLAY = axis
MAX_LINEAR_VELOCITY = 111
OPEN_FILE = ./rect.ngc

[TASK]
TASK = milltask
CYCLE_TIME = 0.001

[RS274NGC]
PARAMETER_FILE = sim.var

[EMCIO]
EMCIO = io
CYCLE_TIME = 0.100

[EMCMOT]
EMCMOT = motmod
SERVO_PERIOD = 1000000

[TRAJ]
COORDINATES = XYZ
LINEAR_UNITS = inch
ANGULAR_UNITS = degree

[KINS]
JOINTS = 3
KINEMATICS = trivkins coordinates=XYZ kinstype=1

[AXIS_X]
OFFSET_AV_RATIO =   0.2
MAX_VELOCITY     = 99
MAX_ACCELERATION =  9.9
MAX_LIMIT = 20
MIN_LIMIT =-20

[AXIS_Y]
OFFSET_AV_RATIO =   0.2
MAX_VELOCITY     = 98
MAX_ACCELERATION =  9.8

[AXIS_Z]
OFFSET_AV_RATIO  =  0.2
MAX_VELOCITY     = 97
MAX_ACCELERATION =  9.7
MAX_LIMIT =1
MIN_LIMIT =-1

[JOINT_0]
TYPE = LINEAR
HOME_SEQUENCE = 0

[JOINT_1]
TYPE = LINEAR
HOME_SEQUENCE = 0

[JOINT_2]
MAX_LIMIT =100000000000000
MIN_LIMIT =-100000000000000
TYPE = LINEAR
HOME_SEQUENCE = 0
