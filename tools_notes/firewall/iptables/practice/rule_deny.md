# hashlimit

``` bash
iptables -I INPUT -d 192.168.0.18 -p tcp --dport 80 -m hashlimit --hashlimit-name flood_list --hashlimit-above 20/second --hashlimit-mode srcip --hashlimit-burst 100 --hashlimit-htable-expire 3000 -j DROP

iptables -I INPUT -d 192.168.0.18 -p tcp --dport 80 -m hashlimit --hashlimit-name flood_list --hashlimit-above 20/second --hashlimit-mode srcip --hashlimit-burst 100 --hashlimit-htable-expire 3600 -j LOG --log-prefix "[Im attack]:"
```