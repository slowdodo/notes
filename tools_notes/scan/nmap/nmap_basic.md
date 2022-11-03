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
Ping을 이용하여 해당 호스트가 살아있는지 검사
```bash
nmap -sP 192.168.1.100
```
1~4000번 포트까지 RPC 포트를 찾아 보여줌
```bash
nmap -sR -p 1-4000
```


# nmap 대표적 기능

잘못 사용시 범죄이니 합법적인 선에서 알아서 사용하자 

살아있는 호스트를 검색
``` bash
nmap -sn google.com
```
타겟의 wellknown port를 검사
``` bash
nmap google.com
```

해당 호스트의 포트와 운영체제를 스캔
```bash
nmap -O 192.168.1.100
```
192.168.1.0부터 192.168.1.255 까지 스캔 운영체제를 포함하여 모두 스캔
``` bash
bash -p22,80,440 -O -T4 192.168.1.0/24 google.com
```

보통 내 컴퓨터의 활성화된 포트를 스캔할때 유용하게 사용됨
``` bash
nmap localhost
```

# 랜덤 스캔

``` bash
nmap -iR 100
```


# NSE를 이용한 스캔

웹 서버의 시그니처 및 기본적 포트를 스캔

``` bash
nmap -p80,22,23,440 -Pn -T4 --open --script http-headers,http-title,ssl-cert
```
