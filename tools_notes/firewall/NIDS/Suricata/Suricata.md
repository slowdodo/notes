# suricata?
snort의 한계를 극복하기위해 만들어졌는데 멀티스레딩 방식을 지원하며 snort를 대처하기위해 만들어진 만큼  
rule도 완벽하게는 아니지만 공유하며, , Protocol Identification과 HTTP Normalizer & Parser, File Identification 등 기능들이 새로 추가되었다.  

특정작업을 스레드별로 나눠서 효과적인 작업 처리가 가능하며 snort에 비해서 교효율 작업이 가능해졌다.  
cpu의 개수가 적을수록 snort가 통상적으로 작업 효율이 높지만 cpu의 개수가 늘어날수록 suricata가 snort의 PPS(Packets Per Second)처리 수치를 상회하는것으로 나타난다.  

다만 완전히 rule이 공유되는것이 아니라서 website에서 갱신되는 snort의 룰을 suricata에서 그대로 적용하는것보단 suricata의 룰을 적용하는것이 효율적이다.  
적용은 되긴 하지만 suricata의 그대로의 성능을 내기위해선 suricata를 위해 만들어진 rule을 사용하는것을 추천한다.  