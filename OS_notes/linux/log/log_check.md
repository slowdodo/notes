# snoopy
리눅스 내에서 발생하는 대부분의 로그들을 통합해서 /var/log/auth.log에 모와주는 툴이다.


# log의 끝자리부터 n회 위에까지 출력

``` bash
tail -n 1 /var/log/auth.log
```

# tail을 사용한 실시간 로그체크

``` bash
tail -n 1 -f /var/log/auth.log
```