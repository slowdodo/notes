# 방화벽 회피 스캔

``` bash
nmap -f 192.168.2.1
```

``` bash
nmap -mtu 15000 192.168.2.1
```

``` bash
nmap -D RND:100 192.168.2.1
```

``` bash
nmap -randomize-hosts 192.168.2.1
```

``` bash
nmap -spoof-mac (MAC|0|vendor) 192.168.2.1
```

Idle 좀비 스캔
``` bash
nmap -sl (zombie) 192.168.2.1
```

badsum을 체크하는 스캔
``` bash
nmap -badsum 192.168.2.1
```

``` bash
nmap -data-length (size) 192.168.2.1
```
