``` bash
df -P  | echo `awk 'NR>2{sum+=$2}END{print int(sum/1024/1024)}'` GB
```
