# docker volume
간단하게 volume은 docker의 설정된 디렉터리를 만드는거라 생각하면 된다.


``` bash
docker volume create <name>
```

``` bash
docker volume ls
```

``` bash
docker volume inspect <name>
```

안쓰는 볼륨 지우기  
``` bash
docker volume prune
```

위 명령어와 아래 예시를 통하여 도커 볼륨의 개념을 익혀보자  
``` bash
docker volume create bwapp && \
docker run -d --name bwapp -p80:80 -v bwapp:/var/log/ raesene/bwapp:latest && \
docker ps -a --format "table {{.Ports}} {{.Name}}"
```


# volume basic location change


``` bash
docker volume create -d local -o o=bind -o type=none -o device=/home/user/data my-volume
```

``` bash
docker run --mount source=my-volume,target=/data <image-name>
```