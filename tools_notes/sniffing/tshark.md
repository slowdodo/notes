# tshark란

    패킷을 감청하고 분석할수 있게 도와주는 프로그램
    와이어 샤크와 상당히 비슷하지만 차별점은 cli 기반으로 동작한다.

# tshark [options] ...

# 자주 사용하는 기본 옵션

|옵션|활용|기능|
|---|---|---|
|-D|tshark -D|감청할수있는 네트워크 인터페이스를 보여줌|
|-i (NIC)|tshark -i wlo0|특정 NIC을 선택하여 패킷을 감청할수 있게 해줌|
|-V |tshark -i wlo0 -V  |패킷의 상세 정보를 보여줌|
|-c (number) | tshark -i wlo0 -c 10 | 패킷을 몇번정도 감청할것인지 정하는 옵션|
|-w (file) | tshark -i wlo0 -w hello.pcap| 패킷을 감청하고 그것을 파일로 내보냄|
|-r (file) | tshark -r hello.pcap | 감청한 파일을 읽어들이는 옵션|
|-q | tshark -r hello.pcap -z hosts -q|요약 정보만 보고싶을때 사용하는 옵션 | 

# 자주사용하는 특수 옵션

|옵션|활용|기능|
|---|---|---|
|-z|tshark -r hello.pcap -z hosts |tshark의 패킷을 다양한 통계로 필터링해서 볼수있게 해줌|
    

# 여담

패킷을 감청하고 추출하고 자동화 하는데 유용하긴 하지만 바닐라는 뭔가 복잡한데 

플러그인이나 개조 툴들을 알아보는것도 좋은선택인거같다.

개조 툴 중에 go로 개조한 termshark가 있는데 개인적으로 괜찮은 도구라고 생각하는데 한번 써보는것을 추천한다.

![termshark](https://github.com/gcla/termshark)
