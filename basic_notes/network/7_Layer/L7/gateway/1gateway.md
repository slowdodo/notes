# 게이트웨이(gateway)

* `다른 네트워크로 가는 문`
* 내가 사용하는 네트워크 (192.168.100.100)에서 다른 네트워크 대역(172.16.20.0) 대역으로 통신하기위해 필요한 문
* 같은 네트워크는 MAC으로 통신하기에 게이트웨이를 거치지않는다.
    * 같은 대역에선 (192.168.100.100) -> (192.168.100.99) 게이트웨이를 거치지 않는다.
    * 다른 대역에선 (172.16.20.1) -> (172.16.20.2) 게이트웨이를 거쳐야 된다.
* ip대역은 서브넷 마스크로도 대역이 바뀔수 있기에 주의해서 설정해야된다.

# 게이트웨이 설명 예
* 가장 잘 알려진 예로는 랜이나 무선 랜을 인터넷이나 다른 원거리 통신망에 연결하는 것이다.<br/>
이 경우 게이트웨이는 랜을 제공자 지정 네트워크에 연결함으로써 인터넷에 연결할 수 있게 된다. 가정의 경우 이 게이트웨이는 상주 게이트웨이라 부른다.

가까운 예로는 인터넷 공유기로 볼 수 있다.

마이크로소프트 윈도우 기준으로 컴퓨터에서 직접적으로 찾아보고 싶은 경우, 명령 프롬프트에서 ipconfig을 타이핑하여 기본 게이트웨이를 보면 시각적으로 확인할 수 있다.