# alias 환경변수 설정방법

* alias는 지역변수

vim ~/.bashrc_alias
에 원하는 환경변수 적기
```bash
alias grep=`grep --color-auto
````

~/.bashrc
```bash
if [ -f ~/.bash_alias]; then
    . ~/.bash_alias
fi
```

# export 환경변수 설정방법
* export는 전역변수

env
전역 변수 설정 및 조회
set
사용자 환경 변수 설정 및 조회
export
사용자 환경 변수를 전역 변수로 설정

https://wikidocs.net/72712