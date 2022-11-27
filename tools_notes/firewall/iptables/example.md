# 출력 예제

룰 보기

``` bash
iptables -nL
```
이하 동문
``` bash
view /etc/sysconfig/iptables
```

Rule의 번호값 보기
``` bash
iptables -L --line-numbers
```

# Rule_Set
들어오는 TCP포트 80을 막기
```bash
iptables -A INPUT -p tcp --dport 80 -j DROP 
```

# Rules 저장방법

``` bash
iptables-save > 20221010.rules
```

# 복원예제

``` bash
iptables-restore < 20221010.rules
```

# delete

`iptables -L --line-numbers`으로 확인한 NUMBER RULE 지우기
``` bash
iptables -D INPUT 2
```

# all delete

``` bash
iptables -F
```

# 테스트 환경 구축

방화벽 설정을 확인할 service 간단하게 실행
```bash
sudo apt -y upgrade && \ 
sudo apt -y install apache2 && \
sudo service apache2 start
```

port 보기
``` bash 
nmap localhost
```