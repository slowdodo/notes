# Wireshark란?

가장 대중적이고 가장 유명한 네트워크, 프로토콜, 패킷 분석 도구이다.


와이어 샤크는 이럴때 매우 효과적이다.

1. 알려진 문제의 근원지를 조사
2. 기기 간 특정한 프로토콜이나 스트림을 찾는다.
3. 네트워크에서 특이한 타이밍(Timing), 프로토콜 플래그, 비트 분석 등

이럴때는 비효율적이다.

1. 프로토콜의 점유율 확인
2. 네트워크의 트래픽을 분석
3. 두 기기간의 통신을 추적하기

# 주의사항 (반드시)  
wireshark를 사용할떄 특히 기업에서 사용할떄 root로 wireshark를 사용하면 안됩니다.  
wireshark는 패킷을 검사하는 도구지 패킷의 위협성을 판단하고 필터링하는 도구가 아니기에 악성 패킷의 payload로 인하여  
내부 시스템이 payload에 의하여 망가질수 있습니다. 그렇기에 그룹으로 권한을 최소화 하고 사용해야됩니다.  
검사로 인하여 내부 시스템이 바이러스와같은 공격에 감염되었을떄 `wireshark를 사용한 당사자에게 책임을 묻기에` 반드시 주의해야합니다.

# 메뉴얼

[wireshark basic document](https://www.wireshark.org/docs/wsug_html_chunked/ChWorkBuildDisplayFilterSection.html)
