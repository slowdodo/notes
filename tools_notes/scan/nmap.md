# NMap(Network Mapper)란?

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


# nmap 사용 예

해당 호스트의 정보를 좀 더 자세히 보여줌
```bash
nmap -v 200.200.100.100
```
네트워크 전체를 스캔(자신의 컴퓨터의 well-known port를 확인할때 유용함)
```bash
nmap localhost
```
100~150번 호스트들을 싹 스캔
```bash
nmap 192.168.1.100-150
```
100번과 110번 호스트만을 스캔
```bash
nmap 192.168.1.100, 192.168.100.110
```
해당 호스트의 포트와 운영체제를 스캔
```bash
nmap -O 192.168.1.100
```
Ping을 이용하여 해당 호스트가 살아있는지 검사
```bash
nmap -sP 192.168.1.100
```
1~4000번 포트까지 RPC 포트를 찾아 보여줌
```bash
nmap -sR -p 1-4000
```

# 여담
Nmap은 NSE로 커스텀할수있다.
/usr/share/nmap/scripts
