* [tmux](#tmux)
* [vim](#vim)

------------------
설정의 위치는 환경에따라, 설정에따라 바뀔수가 있는데 default는 저기

# tmux

``` bash
vim ~/.tmux.conf
````

``` bash
  set -g default-terminal 'screen-256color'
  set -g history-limit 1000
  
  set -g status-fg green
  set -g status-bg black
```
-------------------

# vim

``` bash
vim ~/.vimrc
```

```bash
set mouse=a
set mouse=v

set ignorecase
set hlsearch
set nu 
set autoindent
set autowrite
set autoread
set cindent 
set paste 
set showmatch
set smartcase
set smarttab
set smartindent

set history=256
set scrolloff=2
set shiftwidth=4
set softtabstop=4
set tabstop=4

set wildmode=longest,list

set clipboard=unnamedplus

set ttyfast
syntax on
set t_Co=256

```
