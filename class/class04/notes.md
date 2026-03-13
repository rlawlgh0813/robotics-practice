# Class 04

## 1. ROS2 Action 개념

Action은 ROS2에서 사용되는 통신 방식 중 하나로, **작업 목표를 전달하고 실행 과정의 상태를 지속적으로 전달받을 수 있는 구조**이다.

Action 통신은 다음 세 가지 요소로 구성된다.

- **Goal** : Client가 Server에게 전달하는 작업 목표  
- **Feedback** : 작업이 진행되는 동안 Server가 전달하는 중간 상태  
- **Result** : 작업이 완료된 후 Server가 반환하는 최종 결과  

Service와 달리 실행 시간이 긴 작업에 적합하며, 작업 진행 상태를 확인할 수 있다는 특징이 있다.

---

## 2. Action 인터페이스 및 Server / Client 실습

먼저 Action 인터페이스를 직접 정의하고 이를 기반으로 Action Server와 Client를 구현했다.

MyInterfaces.action 인터페이스를 생성하여 다음 구조를 정의했다.

- Goal : order  
- Result : sequence  
- Feedback : partial_sequence  

이 인터페이스는 입력된 숫자까지 **피보나치 수열을 계산하는 Action**으로 사용했다.

Action Server에서는 Goal 요청을 받아 피보나치 수열을 계산하고 결과를 반환하도록 구현했다.  
또한 계산 과정에서 Feedback을 전달하도록 하여 Client가 진행 상태를 확인할 수 있도록 했다.

Action Client에서는 Server에 Goal을 전송하고, Goal 수락 여부를 확인한 뒤 Result와 Feedback을 수신하도록 구현했다.

---

## 3. Turtlesim Patrol Action 실습

마지막 실습에서는 turtlesim을 이용해 **여러 waypoint를 순차적으로 이동하는 Action 시스템**을 구현했다.

PatrolTest.action 인터페이스를 정의하여 다음 정보를 사용했다.

- Goal : waypoint 좌표 목록, 허용 오차  
- Feedback : 현재 waypoint index, 남은 거리  
- Result : 순찰 성공 여부

Action Server에서는 turtlesim의 위치 정보를 구독하고 `/turtle1/cmd_vel`을 이용해 거북이를 waypoint 방향으로 이동시키도록 구현했다.

Action Client에서는 여러 waypoint를 Goal로 전달하여 거북이가 순차적으로 이동하도록 했으며,  
추가로 랜덤 waypoint를 생성하여 순찰 경로를 확장하는 실습을 진행했다.