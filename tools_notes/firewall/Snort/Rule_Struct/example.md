# Snort
``` snort
alert tcp any any -> any 80 (msg:"Test Web traffic"; content:"Get")
```