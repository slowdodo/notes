# UDP(User Datagram Protocol)
* 사용자 데이터그램 프로토콜(UDP)은 비연결형이고, 신뢰성이 없는 전송 프로토콜이다.
* 호스트 간 통신 대신에 프로세스 간 통신을 제공하는 것을 제외하고는 IP 서비스에 어떠한 것도 추가하지  않는다.
* 최소한의 오버헤드를 가진 매우 간단한 프로토콜이다.
    * 프로세스가 작은 메시지를 송신하기를 원하고, 신뢰성을 그다지 신경쓰지 않는다면 UPD를 사용하면 된다.
* UDP 패킷은 각각 2Bytes(16bit)인 4개의 필드로 만들어진 고정된 크기의 8Bytes 헤더를 가지고 있다.

# UDP Header
![UDP Header](https://media.geeksforgeeks.org/wp-content/uploads/UDP-header.png)

# UDP Service
* 프로세스-대-프로세스 통신
    * UDP는 IP 주소와 포트 번호와 결합인 소켓 주소(socket address)를 이용하여 프로세스-대-프로세스 통신을 제공
* 비연결형 서비스(Connectionless Service)
    * UDP는 비연결형 서비스를 제공한다.
    * 동일한 근원지 프로세스로부터 들어와서 동일한 목적지 프로그램으로 간다 할지라도, 사용자 데이터그램은 서로 관계없다.
* 흐름 제어
    *
    *
* 오류 제어
* 혼잡 제어
* 다중화와 역다중화
