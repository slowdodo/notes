| 옵션                     	| 내용                                                                                                                                                	|
|--------------------------	|-----------------------------------------------------------------------------------------------------------------------------------------------------	|
| Order Deny, Allow        	| - Deny와 Allow의 순서를 정한다. (Deny, Allow or Allow, Deny)                                                                                        	|
| Deny from All            	| - 모든 트래픽을 막는다.                                                                                                                             	|
| LimitRequestBody 5000000 	| - 파일 업로드, 다운로드 시 파일 크기를 제한한다.                                                                                                    	|
| Options FollowSymLinks   	| - 심볼릭 링크로 설정된 링크 파일의 경로 까지도 확인 할 수 있다.                                                                                     	|
| indexes                  	| - indexes 웹서버의 디렉토리 접근 시 지정한 파일이 존재하지 않을 경우에 디렉토리내의 파일목록리스트를 보여준다. 보안을 위해 사용하지 않는 것이 좋다. 	       |
| AllowOverride            	| - 어떻게 접근을 허락할 것인가에 대한 설정<br>- 옵션 : None, ALL, AuthConfig, FileInfo, Indexes, Limit, Options                                      	|