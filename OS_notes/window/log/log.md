# Window 로그 보는법

1. [Window_Key] 누르기 -> Event Viewer 입력 
2. [Window_Key] + R -> eventvwr.msc 입력

# Window 로그정책

윈도우는 최근에 XML로 로그를 기록하는 방식을 통합하여 과거와 같이 로그를 까다롭게 처리하거나 하지 않아도 되지만 그렇다고 sysmon를 안쓰는게 아니다. 
다양한 방식으로 로그를 통합적으로 모을수 있기때문에 요즘같은 빅데이터 기반 딥러닝을 이용한 APT 탐지와같은 아키텍쳐인 SIEM(Security information and event management)  
을 효과적으로 운영하기위해선 이러한 통합적으로 로그를 모와주는 기능도 필요하다.