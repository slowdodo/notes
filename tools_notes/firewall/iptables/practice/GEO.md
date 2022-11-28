
``` bash
iptables -I INPUT -p tcp -d 192.168.0.18 -m geoip --src-cc US -j DROP && \
iptables -I INPUT -p tcp -s 1.1.1.1 -d 192.168.0.18 -j ACCEPT
```