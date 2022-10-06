# :norm

    여러줄 동시 처리

#문자 맨앞에 추가
```bash
:norm i#
```

앞에 문자가 n개 지워짐
```bash
:norm 1x
:norm 2x 
```

# /

    특정 문자만 필터해서 찾음

hello 문자만 필터해서 찾음
```bash
/hello
```

# :!

    vim에서 특수 terminal command 수행 가능

```bash
:! sudo apt -y update 
```
