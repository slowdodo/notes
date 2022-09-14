* [tmux](#tmux)
* [vim](#vim)
* [neovim](#neovim)

------------------

# tmux
```bash
  set -g default-terminal 'screen-256color'
  set -g history-limit 1000
  
  set -g status-fg green
  set -g status-bg black
```
-------------------

# vim

```bash
if empty(glob('~/.vim/autoload/plug.vim'))
        silent !curl -fLo ~/.vim/autoload/plug.vim --create-dirs
                \ https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
        autocmd VimEnter * PlugInstall --sync | source $MYVIMRC
        
endif
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

set mouse=a  "move with the cursor
set mouse=v  "copy paste              

set clipboard=unnamedplus

set ttyfast
syntax on
set t_Co=256

filetype indent on



call plug#begin()

Plug 'https://github.com/preservim/nerdtree' " NerdTree
Plug 'https://github.com/ap/vim-css-color' " CSS Color Preview
Plug 'https://github.com/rafi/awesome-vim-colorschemes' " Retro Scheme
Plug 'https://github.com/tc50cal/vim-terminal' " Vim Terminal
Plug 'https://github.com/preservim/tagbar' " Tagbar for code navigation
Plug 'https://github.com/terryma/vim-multiple-cursors' " CTRL + N for multiple cursors
Plug 'https://github.com/vim-airline/vim-airline.git'


set encoding=UTF-8
call plug#end()

nnoremap <C-f> :NERDTreeFocus<CR>
nnoremap <C-n> :NERDTree<CR>
nnoremap <C-t> :NERDTreeToggle<CR>
nnoremap <C-l> :call CocActionAsync('jumpDefinition')<CR>

nmap <F8> :TagbarToggle<CR>

:set completeopt-=preview " For No Previews

:colorscheme jellybeans

let g:NERDTreeDirArrowExpandable="+"
let g:NERDTreeDirArrowCollapsible="~"

```
------

# neovim
```bash
set showmatch               
set ignorecase              
set hlsearch                
set incsearch

set tabstop=4               
set softtabstop=4           
set expandtab               
set shiftwidth=4            
set smarttab

set autoindent              


set number                  
set wildmode=longest,list   

set mouse=a                 
set mouse=v                 

set clipboard=unnamedplus   
 
  
set ttyfast                 
syntax on    
```
