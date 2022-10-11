# iptables
* 들어오는 포트를 막아주는 `시스템단 방화벽`

# 출력 예제

룰 보기
```bash
iptables -nL
```

Rule의 번호값 보기
```bash
iptables -L --line-numbers
```
# Rule_Set

들어오는 TCP포트 80을 막기
```bash
iptables -A INPUT -p tcp --dport 80 -j DROP 
```

# Rules 저장방법

```bash
iptables-save > 20221010.rules
```

# 복원예제

```bash
iptables-restore < 20221010.rules
```

# delete

`iptables -L --line-numbers`으로 확인한 NUMBER RULE 지우기
```bash
iptables -D INPUT 2
```



# 테스트

방화벽 설정을 확인할 service 간단하게 실행
```bash
service apache2 start
```

port 보기
```bash 
nmap localhost
```