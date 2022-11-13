# tmux

``` bash
vim ~/.tmux.conf
````

``` bash
set -g default-terminal 'screen-256color'
set -g history-limit 1000

set -g status-fg green
set -g status-bg black
setw -gq mouse on
```


# 단축키

## 가로로 분할

`[ctrl]` + `[b]` -> % 

## 세로로 분할

`[ctrl]` + `[b]` -> " 

## 창 늘리기

꾹 누른 상태로 방향키 누르면 그쪽으로 늘어남

`[ctrl]` + `[b]` + Arrow keys
