# Class 05

## 1. Launch

ROS2에서 **launch**는 여러 노드를 한 번에 실행하고 실행 설정을 함께 관리하기 위한 방식이다.

- `ros2 run` : 단일 노드 실행  
- `ros2 launch` : 여러 노드를 동시에 실행

### turtlesim launch 실습

launch 파일을 이용해 **두 개의 turtlesim 노드를 동시에 실행**하고 `mimic` 노드를 이용해 한 turtle이 다른 turtle을 따라 움직이도록 구성했다.

- `turtlesim1` : 기준 turtle  
- `turtlesim2` : 따라 움직이는 turtle  
- `mimic node` : 두 turtle의 topic 연결

`remapping`을 이용해 토픽을 연결했다.

- `/input/pose → /turtlesim1/turtle1/pose`  
- `/output/cmd_vel → /turtlesim2/turtle1/cmd_vel`

이 설정을 통해 turtlesim2가 turtlesim1의 움직임을 그대로 따라 움직이도록 만들 수 있었다.

---

## 2. Launch Substitution 실습

launch 실행 시 전달된 값을 이용해 설정을 동적으로 변경하는 **substitution 기능**을 사용했다.

주요 substitution

- `LaunchConfiguration` : launch argument 값 참조  
- `TextSubstitution` : 문자열 전달  
- `FindPackageShare` : 패키지 share 경로 탐색  
- `PathJoinSubstitution` : 경로 결합  
- `PythonExpression` : 실행 시점 계산

### launch 구조

실습에서는 **launch 파일을 포함하는 구조**로 구성했다.

`main_launch.py`

- 상위 launch 파일  
- 다른 launch 파일을 포함하고 argument 전달

`substitutions_launch.py`

- turtlesim 노드 실행  
- 전달받은 namespace 기반으로 노드 실행

### TimerAction 사용

`TimerAction`을 이용해 일정 시간 후 작업을 실행하도록 구성했다.

- turtlesim 실행 후 turtle spawn  
- 일정 시간 후 background color 변경

---

## 3. Launch Event Handler

launch에서는 특정 이벤트가 발생했을 때 실행되는 **Event Handler**를 사용할 수 있다.

실습에서 사용한 이벤트

- `OnProcessStart` : 노드 시작 시 실행  
- `OnProcessIO` : 실행 중 출력 발생 시 실행  
- `OnExecutionComplete` : action 완료 시 실행  
- `OnProcessExit` : 노드 종료 시 실행  
- `OnShutdown` : launch 종료 시 실행

예를 들어 turtlesim이 시작되면 spawn을 실행하고, spawn 완료 후 background color를 변경하도록 이벤트 흐름을 구성했다.

---

## 4. ROS2 Parameter

Parameter는 **노드의 설정값**이며 코드 수정 없이 노드 동작을 변경할 수 있다.

주요 명령어

현재 파라미터 목록

`ros2 param list`

노드 파라미터 조회

`ros2 param get /turtlesim background_r`

파라미터 저장

`ros2 param dump /turtlesim`

파일로 저장

`ros2 param dump /turtlesim > turtlesim.yaml`

저장된 파라미터 적용

`ros2 param load /turtlesim turtlesim.yaml`

---

## 5. Dynamic Parameter Control 실습

`turtle_param_control` 패키지를 생성하고 `turtle_controller.py` 노드를 구현했다.

이 노드는 `/turtle1/cmd_vel` 토픽에 `Twist` 메시지를 publish하여 turtle의 움직임을 제어한다.

### 주요 파라미터

`mode`

- straight
- circle
- zigzag
- stop

`linear_speed`

- 직선 이동 속도

`angular_speed`

- 회전 속도

`enable`

- 노드 동작 활성화 여부

노드 내부에서는

- `declare_parameter()` : 파라미터 선언  
- `get_parameter()` : 현재 값 읽기  
- `add_on_set_parameters_callback()` : 파라미터 변경 감지  

를 이용해 실행 중 파라미터 변경을 처리했다.

### 실행 중 파라미터 변경

`ros2 param set /turtle_param_controller mode circle`

위 명령을 통해 실행 중에도 turtle의 동작을 변경할 수 있었다.

- straight : 직선 이동  
- circle : 원형 이동  
- zigzag : 지그재그 이동  
- stop : 정지