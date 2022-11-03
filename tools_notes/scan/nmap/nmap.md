# NMap(Network Mapper)란?

기본적으로 네트워크를 탐지하는 기능을 가지고 있으며 포트스캔, 스텔스 스캔, 취약점 점검, 방화벽 회피, 공격, 네트워크 점검 등 

다양한 방식으로 현대에는 거의 만능에 가까울정도로 기능이 다양하고 그만큼 쉬우면서도 어려운 도구이다.


# NSE(Nmap Script Engine)

스크립트로 또한 한층 더 진보된 방식으로 nmap을 사용가능한데 nmap은 이걸 NSE라 부른다.

LUA를 기반으로 만들어긴 기본적인 스크립트와 유저들이 직접 개발해서 만든 스크립트를 조합하여

목적에 맞게 다양한 방식으로 NMAP을 사용이 가능하게 만들수 있다.

파일의 위치는 보통 아래링크에 위치해 있으며 루아를 기반으로 하기에 c언어와 연계도 가능하다.

``` bash
/usr/share/nmap/scripts
```

# 특징
* 모든 운영체제에서 사용가능하다
* 운영체제의 종류 및 사용 서비스에 대한 정보를 파악 가능
* FTP 서버의 취약점을 이용한 bounce 공격을 수행 가능
* NMap은 오픈소스로 누구나 소스를 맞춤형으로 변형도 가능하다.
* 윈도우는 gui로도 사용이 가능하다

# 기본 명령어

* Scan Type
	* sS : TCP SYN(Half-Open)Scan
	* sT : TCP Connect(Open)Scan
	* sU : UDP Scan
	* sF : TCP FIN Scan: FIN 패킷을 이용한 스캔
	* sX : TCP Xmas Scan: FIN, PSH, URG 패킷을 이용한 스캔
	* sN : TCP NULL Scan: NULL 패킷을 이용한 스캔
	* sA : TCP ACK Scan
	* sP : Ping(icmp/icmp echo): Ping을 이용한 호스트 활성화 여부 확인 스캔
	* sD : Decoy 스캔: 실제 스캐너 주소 외에도 다양한 주소로 위조하여 스캔하는 방식
	* b : TCP FTP Bounce Scan, -b <FTP bounce proxy>

* Port Option
	* p 22 : 22번 포트 스캔
	* p <service> : 특정 서비스명(ssh, telnet, http 등)으로 스캔
	* p 20,25,80 : 20, 25, 80번 포트 스캔 -> 여러 포트 스캔
	* p 1-1023 : 1~1023번 포트를 스캔 -> 일정 범위로 포트를 스캔
	* pT:21,23,110,U:53 : TCP 21,23,110번 UDP 53번 포트를 스캔

* Output Option
	* v(verbose) : 상세정보 출력
	* d : Debugging
	* oN <file> : 결과를 일반 파일 형식으로 출력
	* oX <file> : 결과를 XML 파일 형식으로 출력
	* oG <file> : 결과를 Grepable(grep, awk 등으로 분석하기 편하게게 파일 형식으로 출력
	* oA <Directoy>: 일반(.nmap), XML(.xml), Grepable(.gnmap) 파일로 분석


* 기타 Option
	* O : 대상 호스트의 운영체제 정보 출력
	* F : 빠른 네트워크 스캐닝
	* T0~5 : 0(아주 느림) ~ 5(아주 빠름)
	* S : fake ip를 사용할수있다면 해줄수 있게 해줌
	* Pn : 이 명령은 반대로 핑을 사용하지 않는다. nmap은 스캔에 있어 사전에 핑을 통해 호스트가 살아있음을 확인하고 진행하는데,<br> 보안 문제로 인해 핑을 무시하는 호스트에 대해서는 스캔을 할 수가 없다. 그러한 경우에는 위 명령을 통해 확인 절차를 스킵하자.
	* 