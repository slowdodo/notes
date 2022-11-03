자꾸 까먹어서
``` bash
docker volume create portainer_data
```

``` bash
docker run -d -p 9000:9000 --name portainer --restart=always -v /var/run/docker.sock:/var/run/docker.sock -v portainer_data:/data portainer/portainer-ce:latest
```


출처: [portainer](https://docs.portainer.io/start/install/server/docker/linux)