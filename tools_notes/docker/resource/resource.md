# 자원 조절
docker는 당연하게도 컨테이너의 자원을 조정할수있습니다.  
이러한 시스템을 이용하여 클러스터 솔루션을 사용하여 서버를 만들수 있습니다.  
아래 매우 간단한 예제가 있으니 이를 활용하여 도커 서비스를 띄워보시길 바랍니다.  

``` bash
docker run -d --name tomcat --cpu 1 --memory 500MB tomcat:latest
```