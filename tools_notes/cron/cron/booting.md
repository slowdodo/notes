# 부팅할때마다 실행


``` bash
cron -e -i 
```


crontab -e -i 안에서
(아래 명령어는 보안상 취약해서 사용을 비추천함 예시일 뿐)

`etc/init.d`
`/etc/rc.local`

init.d -> crontab -> rc.local순 실행

``` bash
@reboot echo "1234" | sudo -S service ssh restart
```

``` bash
@reboot /root/backup.sh
```