# 잘못된 변수 작성
``` bash
cmd='docker ps -a --format "table {{.Images}}\t{{.Ports}}"'
cmd
```

명령어의 배열들은 일반적으로 위 방식을 사용하여 저장하지만

저러한 옵션이 있는 배열은 위와 같은 방식을 사용하면 에러가 나게된다

따라서 아래와 같은 방법을 사용해야된다

# 올바른 작성 방법
``` bash
cmd=("docker" "ps" "-a" "--format" "table {{.Images}}\t{{.Ports}}")
"${cmd[@]}"
```