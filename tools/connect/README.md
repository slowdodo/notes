Telnet

    TCP/IP기반의 22번 포트를 사용하는  통신 프로토콜이다.
    다른 컴퓨터에 원격으로 연결하여 마치 자신의 터미널을 쓰는것마냥 해주는 기능

    특징
    모든 데이터는 평문으로 전송하여 보안에 매우매우 취약
    telnet HIjecking, sniffing, spoofing, reverse telnet attack 같은 취약점이 있다.

SSH

    TCP/IP기반의 23번 포트를 사용하는 통신 프로토콜 
    telnet의 취약점을 보안하기위해 나온 프로토콜로 모든 데이터를 암호화 하여 전송
    SSH1-RSA암호를 지원
    SSH2- RSA,DSA를 지원
    