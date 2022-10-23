# Tunneling이란?

# 터널링 장단점

* Layer 2
    * 장점
        * 단순하다
        * 종단 간 압축 및 암호화를 지원
    * 단점
        * 확장성, 보안성, 신뢰성에 대한 고려가 적다
    * 보안
        * 비표준화, 자체지원
    * 특징
        * PPP 기술 활용
    * 성능
        * 빠르다
        * 전체 접속에 하나의 핸드쉐이크 필요

* Layer 3
    * 장점
        * 확장성
        * 보안성
        * 신뢰성
    * 단점
        * 개발하기 복잡함
    * 보안
        * 지원한다
    * 특징
        * 다중서비스 지원
    * 성능
        * 각 Application 접속에 핸드쉐이크가 필수
        * 오버헤드가 많이 걸린다


# 프로토콜

* PPTP(Point to Point Tunneling Protocol)
    * MS에서 개발한 프로토콜
    * 컴퓨터와 컴퓨터가 1대1 방식으로 데이터를 전송하여, <br/>
    다른 시스템이나 인터넷으로 보안을 유지하면서 가상사설망(VPN)을 지원해주는 프로토콜이다

* L2F(Layer 2 Forwarding): 
    * L2F는 미국 시스코 시스템즈(CISCO)사가 개발한 터널용 프로토콜
    * PPTP나 IPSEC과 달리, 데이터 링크층 수준에서 캡슐화가 가능하고,<br/>
    ip 네트워크 이외에서도 이용할 수 있다.

* L2TP(Layer 2 Tunneling Protocol):
    * PPTP와 L2F를 통합한 프로토콜

* IPSec(Internet Protocol Security)
    * IPSec은 인터넷 계층(3계층(3.5계층도 맞음))에서 동작한다.
    * 모든 트래픽을 암호화하고 인증기능을 제공