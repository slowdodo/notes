# 현재 설정되어 있는 iptables의 규칙(rule)을 전부 제거
``` bash
iptables -F
```

# 들어오는 모든 패킷을 거부한다
``` bash
iptables -P INPUT DROP
```

# IP주소가 192.168.5.13인 호스트로부터 들어오는 패킷을 허가한다
``` bash
iptables -A INPUT -s 192.168.5.13 -j ACCEPT
```


# 포트번호 20 - 30번까지 차단하고, ssh 포트인 22번만 허가한다 거부 메시지 없이 무조건 거절한다
``` bash
iptables -F INPUT && \
iptables -A INPUT -p tcp --dport 22 -j ACCEPT && \
iptables -A INPUT -p tcp --dport 20:30 -j DROP
```