


``` bash
last -f /var/log/btmp | awk '{print $2,"\t", $3}' > test.log
```
