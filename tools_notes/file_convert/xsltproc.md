# xml -> html

``` bash
nmap -A -oX domain.xml domain.com && \
xsltproc nmap_result.xml -o nmap_result.html
```

# xml -> excel

``` bash
nmap -A -oX domain.xml domain.com && \
xsltproc nmap_result.xml -o nmap_result.excel
```