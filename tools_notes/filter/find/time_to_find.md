# 시간별 추적

N 시간 이전에 내용이 변경된 파일 찾기
``` bash
mtime N 
```
가장 최근에 파일을 읽거나 실행시킨 시간
``` bash
atime N  
```

가장 최근에 파일의 소유자, 그룹, 퍼미션 등 파일의 속성이 변경된 시간,Dtime이 없는 시스템에서는 ctime을 파일의 삭제 시간으로 추정한다. 
``` bash
ctime N  
```

파일이 삭제된 시간, 리눅스 시스템에만 존재한다.
``` bash
Dtime N  
```



* amin N : N 분 이전 부터 access했던 file찾기
