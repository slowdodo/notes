파일 있으면 덮어 씌우기
``` bash
find . -executable -type f > excutable_file
```

파일 있으면 last 줄 추가 = append
``` bash
find . -executable -type f >> excutable_file
```

대소문자 구분 없이 찾기
``` bash
find . -iname hello
```




* empty : file의 크기가 0인 것을 찾기
* typec : 확장자가 c인 파일 찾기
