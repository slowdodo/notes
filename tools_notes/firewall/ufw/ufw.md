# ufw
* 외부에서 들어오는(OutBound)모든것을 차단하는 iptables 비슷한 툴
* iptables와 다른점은 모든것을 차단한다음 하나씩 여는방식 입니다.
* 우분투에서 개발한 방화벽 정책인데 좀더 룰 작성이 쉬워집니다.

# 로그 위치
``` bash
cat /var/log/sys/log
```

# 기본 명령어
```bash
ufw status
```

```bash
ufw enable
```
```bash
ufw disable
```

```bash
ufw allow 80/tcp
```
```bash
ufw deny 80/tcp
```

# 특정 경우 차단

```bash
ufw allow from 192.168.100.0/24
```
* 어떤 포트만 열어주고싶으면 
    * 아래 예제는 22번포트를 tcp 프로토콜만 허용
```bash
ufw allow from 192.168.100.0/24 to any port 22 proto tcp
```
