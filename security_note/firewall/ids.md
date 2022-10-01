# IDS(Instrusion Detection System) 란?

* 침입탐지시스템으로 네트워크에서 사용되는 자원의 무결성, 비밀성, 가용성을 저해하는 비정상적인 사용과 오용, 남용 등의 행위를 가능한한 실시간으로 탐지하여 관리자에게 경고 메시지를 보내주고 대응하는 시스템을 말한다.
* 즉, 외부침입에 대한 정보를 수집하고 분석하여 침입활동을 탐지해 이에 대응하도록 보안 담당자에게 통보하는 기능을 수행하는 네트워크 보안 시스템이다.

# 기능
* 전송되는 패킷을 스니핑(Tcpdump, Wireshark,nmap, etc)하여 사전에 등록된 Rule과 비교하여 침입 여부를 판단함
* Snort를 사용한 침입탐지기법

* Rule set
    * 특정단어 탐지
        * 특정단어는 content 옵션으로 전송되는 시그니처를 탐지
        * -alert tcp 200.200.200.200 any -> 100.100.100.100 80(content"TEST";nocase;msg;"IDS TEST";sid:100001;)
    * Land Attack
        * Land Attack 은 발신자의 IP와 수신자의 IP가 동일하게 하는 DDOS 공격 기법으로 sameip로 탐지한다.
        * -alert tcp 200.200.200.200 any -> 100.100.100.100 80(samelp"TEST";msg"Land Attack";sid:100002;)
    

# IDS 구성방식

## Inline
![Inline](https://t1.daumcdn.net/cfile/tistory/9935E5465C316BFB06)
* inline 
    * IDS 솔루션이 중간에 위치해서 스니핑과 오용탐지 혹은 이상탐지를 수행

## Mirror
* Switch Mirroring
    * 구간에 TAP 장비로 패킷을 미러링을 하여 네트워크 성능저하가 없다.
    * 패킷을 분석함
    * 스위치 설정에 의해 스위치 포트로 들어오고 나가는 패킷들의 특정 한포트에 미러링 시킬수 있음
    * 장점
        * 별도의 장비(미러링 탭)가 추가되지 않아도 되서 스위치 미러링을 사용
    * 단점
        * 스위치 자체 부하가 심해지면 미러링 패킷이 유실될수 있다.
        * 부하가 심해지면 스위치가 미러링을 우선순위에서 밀어냄 그렇기에 패킷이 유실될수있다.
![TAP_Mirror](https://t1.daumcdn.net/cfile/tistory/99ABFF465C316BF941)
* Tap Mirroring
    * 물리적(기계적)복사로 패킷을 복사하기에 패킷 유실률이 거의 없다
    다
    장점
        * 패킷 유실률이 거의 없다.
    단점
        * 네트워크 라인 중간에 들어가기에 설치 위치가 중요하다
        * 추가적인 장비를 필요로 한다.

## Proxy
* Proxy(Socket Proxy)
    * 네트워크 장비 없이 프로그램으로만 구동하는 방식


# 특징

# 장단점
* 장점
    * 해킹에 대하여 침입차단시스템(IPS)보다 적극적인 방어가 가능
    * 내부 사용자의 오남용 탐지 및 방어 가능
    * 해킹사고 발생 시 어느 정도의 근원지 추적이 가능하다.
* 단점
    * 대규모 네트워크에 사용이 힘들다.
    * 관리 및 운영이 어렵다.
    * 새로운 침입기법에 대한 즉각적인 대응이 곤란하다.
    * 보안사고에 대한 근본적인 해결책이 되진 못한다.

# 종류
* hids
* nids
* time interval ids
* real time ids
* passive ids
* active ids