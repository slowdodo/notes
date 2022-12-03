# 예제 1

``` snort
alert tcp any any -> any 80 (msg:"test web traffic"; content:"get")
```
포트번호 80번을 이용하는 모든 tcp 프로토콜을 사용하는 것들중에 get요청을 하는것들은 경고 발생