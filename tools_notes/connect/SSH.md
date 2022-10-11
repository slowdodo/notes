# SSH란?
* Telnet, RSH, Rlogin 등과 같은 취약점을 가진것을 대체하기 위해 만든 도구
* TCP/IP 프로토콜을 사용한다.
* 기본 포트번호: 22번

# 원리
[SecurityNotes_SSH.md](../../security_note/tool_principle/SSH.md)

# 접속방법

```
ssh kali@192.168.35.33
```

```
ssh -o TCPKeepAlive=yes -o ServerAliveCountMax=20 -o ServerAliveInterval=15 kali@192.168.35.95
```
