# Class 03

## 1. ROS2 Service 개념

Service는 ROS2에서 사용되는 **요청-응답 기반의 통신 방식**이다.

Topic이 비동기적으로 데이터를 계속 전달하는 구조라면,  
Service는 특정 작업을 요청하고 그 결과를 응답으로 받는 방식으로 동작한다.

Service 통신은 다음 두 요소로 구성된다.

- **Client** : Service 요청을 보내는 노드  
- **Server** : 요청을 받아 처리한 뒤 응답을 반환하는 노드  

---

## 2. 기본 Service Server / Client 실습

먼저 `example_interfaces/srv/AddTwoInts`를 사용해 기본적인 Service 통신을 실습했다.

Service Server에서는 `add_two_ints` 서비스를 생성하고,  
Client가 전달한 두 정수를 더한 뒤 결과를 응답으로 반환하도록 구현했다.

Service Client에서는 서버가 준비될 때까지 대기한 뒤 요청을 전송하고,  
비동기 호출 결과를 받아 합계 값을 출력하도록 구현했다.

이 실습을 통해 ROS2에서 Service를 생성하고,  
Client와 Server가 요청과 응답으로 통신하는 기본 구조를 확인했다.

---

## 3. 커스텀 Service 기반 주문 처리 실습

이후 직접 Service 인터페이스를 정의하고, 이를 이용해 간단한 주문 처리 시스템을 구현했다.

직접 정의한 서비스는 다음과 같다.

- **CheckStock** : 재고 확인  
- **AuthorizePayment** : 결제 승인  
- **PlaceOrder** : 주문 요청 처리  

각 서비스에 맞는 Server를 구현하고,  
`order_manager` 노드가 내부적으로 재고 확인과 결제 승인 서비스를 호출한 뒤 최종 주문 결과를 반환하도록 구성했다.

또한 추가 과제로 **DiscountApply** 서비스를 정의하여 할인 서버를 구현하고,  
주문 처리 과정에 할인 적용 로직을 추가했다.

이를 통해 ROS2에서 커스텀 Service 인터페이스를 정의하고,  
여러 Service를 조합해 하나의 흐름으로 연결하는 구조를 실습했다.