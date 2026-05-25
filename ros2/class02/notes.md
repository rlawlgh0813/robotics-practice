# Week 01

## 1. ROS2 기본 개념

ROS2는 여러 노드(Node)가 메시지를 통해 서로 통신하며 로봇 시스템을 구성하는 구조이다.  
노드 간 통신은 Topic, Service, Action 등의 방식으로 이루어지며, 그 중 Topic은 가장 기본적인 통신 방식이다.

Topic 통신은 Publisher와 Subscriber 구조로 동작한다.

- Publisher: 특정 Topic으로 메시지를 발행하는 노드  
- Subscriber: 특정 Topic을 구독하여 메시지를 수신하는 노드  

이 구조를 통해 노드 간 데이터를 비동기적으로 전달할 수 있다.

또한 ROS2 개발은 workspace 기반으로 이루어지며, 패키지를 생성한 뒤 빌드하고 환경을 설정한 후 노드를 실행하는 방식으로 개발이 진행된다.

---

## 2. Topic Publisher / Subscriber 실습 (pubsub)

ROS2의 기본 통신 방식인 Topic 기반 Publisher / Subscriber 모델을 Python(rclpy)을 이용해 구현했다.

Publisher 노드는 일정 주기로 문자열 메시지를 Topic으로 발행하고,  
Subscriber 노드는 해당 Topic을 구독하여 전달된 메시지를 출력하도록 구현했다.

### 실습 과정

- Python 기반 ROS2 패키지 생성  
- publisher 노드 작성  
- subscriber 노드 작성  
- entry point 설정  
- 패키지 빌드 후 노드 실행  

Publisher에서 발행된 메시지가 Subscriber에서 정상적으로 수신되는 것을 확인하며  
ROS2의 Topic 기반 메시지 전달 구조를 이해했다.

---

## 3. Turtlesim Goal Follower 실습 (devws)

turtlesim 시뮬레이터를 이용해 거북이를 특정 좌표로 이동시키는 ROS2 노드를 구현했다.

### 실습 목표

- /turtle1/pose Topic을 구독하여 현재 위치 정보 확인  
- /goal Topic을 구독하여 목표 좌표 입력  
- 현재 위치와 목표 위치의 차이를 계산  
- 계산된 속도를 /turtle1/cmd_vel Topic으로 발행하여 거북이를 목표 위치로 이동  

노드는 현재 위치와 목표 위치 사이의 거리와 각도를 계산하여  
회전과 이동 속도를 조절하고, 거북이가 목표 좌표에 도달하도록 동작하도록 구현했다.

### 실습을 통해 이해한 내용

- ROS2에서 여러 Topic을 동시에 구독하는 방법  
- 계산된 값을 기반으로 새로운 Topic을 발행하는 구조  
- 로봇 제어에서 사용되는 기본적인 피드백 기반 제어 흐름  

또한 turtlesim 환경에서 Topic 구조와 메시지 흐름을 관찰하며  
ROS2 시스템에서 노드 간 데이터 흐름이 어떻게 이루어지는지 확인했다.