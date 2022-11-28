# iptable defenend

iptable은 단순하게 접속 차단을 넘어서 디도스같은 공격을 최후방에서 막는 역할을 한다.  
최악의 상황으로 디도스 대응 장비와 방화벽이 막을수있는 범위의 공격을 넘어서고 보안관제 인원들이 효과적으로 대응하지 못했을떄 흘러들어오는 패킷을 차단하는 역할을 해야된다.  
그런 관점에서 단순하게 iptables rules를 작성해야되는데 기본 명령어로만 가지고 효과적으로 작성하기 어렵기에 이곳의 명령어들을 참고하면 된다.   

# 
192.168.10.10이란 아이피의 인바운드 패킷을 처음 20번쨰 패킷을 차단하며 20번쨰 패킷부터 허용하며 패킷을 초당 1번씩 차단한다.  


``` bash
iptables -I INPUT -m limit -p tcp -d 192.168.10.10 --dport 80 --limit 60/m --limit-burst 20  -j DROP
```

# config


``` bash
/sbin/sysctl -w net/netfilter/nf_conntrack_tcp_loose=0

/sbin/sysctl -w net/ipv4/tcp_timestamps=1

/sbin/sysctl -w net/netfilter/nf_conntrack_max=2000000

sh -c 'echo 2000000 > /sys/module/nf_conntrack/parameters/hashsize'
```