# beat
beat은 logstash를 모든곳에 설치하기 부담되기에 만들어진 기능이다.  
Libbeat, Packetbeat, Filebeat 등의 다양한 beat들을 상황에 맞게 사용하고 최소한의 용량으로 데이터를 Logstach로 전송하는 도구들이다.  
security onion에선 기본적으로 4개의 beat을 지원하지만 다른 beat도 사용이 가능하다.

Filebeat
  file을 수집하기위한 beat으로
  Web log 또는 machine log 등이 저장되는 파일 경로를 지정하기만 하면 Filebeat은 해당 경로에 적재되는 파일을 읽어들이며 새로운 내용이 추가될 때 마다 그 내용을 Elasticsearch로 Indexing 합니다.

Metricbeat
  Metricbeat은 실행시켜놓기만 하면 시스템에서 실행중인 프로세스들의 정보와 이 프로세스들이 소모중인 하드웨어에 대한 상태들을 수집해서 Elasticsearch에 적재하고 손쉽게 이것들을 모니터링 할 수 있는 시스템을 만들 수 있습니다.

Winlogbeat
  Winlogbeat은 Microsoft Windows 기반 시스템에서 시스템에 적재되는 Windows event 들을 수집해 Elasticsearch로 Indexing하여 모니터링 할 수 있도록 합니다.

Auditbeat
  Auditbeat은 리눅스 시스템의 사용자 접속과 실행 이벤트 로그들과 같은 감사 데이터를 수집합니다. 시스템의 분석, 보안감사와 같은 성격의 데이터들을 수집하기위해 사용합니다.