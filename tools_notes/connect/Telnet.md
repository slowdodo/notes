Telnet
* TCP/IP기반의 22번 포트를 사용하는  통신 프로토콜이다.
* 다른 컴퓨터에 원격으로 연결하여 마치 자신의 터미널을 쓰는것마냥 해주는 기능

# 특징
* 모든 데이터는 평문으로 전송하여 보안에 매우매우 취약
* telnet HIjecking, sniffing, spoofing, reverse telnet attack 등과 같은 취약점이 있다.

사용방법

``` bash
telnet 192.168.2.1 22
```

다른 포트도 telent 서버가 아니라도 이렇게 확인이 가능하며 간단하게 포트가 살아있는지 체그겸 써보는용으로도 괜찮다.

서버에 따라 응답을 하거나 안할수 있기에 정상작동 할 수도 있고 아닐수도 있다.

``` bash
telent 192.168.2.1 80
```