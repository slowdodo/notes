
``` powershell
1..255 | % {echo "192.168.35.$_"; ping -n 1 -w 100 192.168.35.$_ | Select-String ttl
```

``` powershell
1..1024 | % {echo ((NEW-Objecr Net.Sockets.TcpClient).Connect("192.168.35.128", $_)) "Open - $_"} 2>$null
```