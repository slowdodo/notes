# Router란?
![router](https://media.wired.com/photos/62b5f706600b0ec42e8fdf24/1:1/w_1651,h_1651,c_limit/TP-Link-Archer-AX55-Gear.jpg)
* 라우터는 3계층(Network) 장치로 물리, 데이터 링크, 네트워크 계층에서 동작한다
* 라우터는 패킷의 링크 계층 주소를 변경한다.
* 라우터를 사용하여 LAN(Local Area Network)을 구성할 때 라우터는 이기종 LAN간의 연결, LAN -> WAN에 연결, 효율적인 경로를 선택하는 라우팅 기능, 에러 패킷에 대한 폐기 등의 기능을 수행

# Router, Repeater, Switch 차이점
* 라우터는 각 인터페이스를 위한 물리주소와 논리주소(IP)를 가짐
* 라우터는 링크 계층 목적지 주소가 패킷이 도착한 인터페이스 주소와 일치하는 패킷을 처리한다
* 라우터는 패킷을 전달할 때 해당 패킷의 링크 계층의 주소를 변경한다

# 특징

* 브리지와 달리 라우터는 네트워크 세그먼트 내부에서 발생하는 브로드캐스팅과 멀티 캐스팅 패킷을 모두 차단하여 다른 네트워크 세그먼트로 전달되는 것을 방지하기에 회선을 효율적으로 사용이 가능하다
* 라우터는 접근 통제 목록(ACL, Access Control Lists)에 기반을 두어 트래픽을 필터하고, 필요하다면 패킷을 분할할 수 있다.
* 라우터는 라우팅 프로토콜(RIP, BGP, OSPF 등)을 통하여 경로와 네트워크에서 발생하는 변경에 대한 정보를 발견한다.
라우팅 프로토콜들은 라우터에게 링크가 다운되어있는지, 특정 경로가 혼잡한지, 다른 경로가 보다 경제적인지를 알려준다.
