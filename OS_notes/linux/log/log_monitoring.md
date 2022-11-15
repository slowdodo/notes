ELk 
Splunk와 같은 다양한 모니터링 툴이 있지만 기본적으로 log.md에서 말한것들로도 기본적인 모니터링이 가능하다.


``` bash
tail -f /var/log/auth.log | grep -e "invalid"
```
