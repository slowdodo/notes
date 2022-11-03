# 쓰기


결과를 파일로 저장(텍스트가 아닌 바이너리 형식으로 저장)
```bash
tcpdump -w tcpdump.log
```
결과를 cap으로 저장
```bash
tcpdump -w tcpdump.cap
```

결과를 pcap으로 저장
```bash
tcpdump -w tcpdump.pcap
```

# 결과 읽기(wireshark나 tshark로 읽는것을 추천함)

저장한 파일을 읽음
```bash
tcpdump -r tcpdump.log 
```