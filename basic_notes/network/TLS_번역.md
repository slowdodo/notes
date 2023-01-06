TLS (Transport Layer Security) is a protocol used to provide secure communication over a network. It is commonly used to secure HTTPS connections on the web, as well as other types of connections such as email and messaging.

The TLS process involves several steps, which are briefly described below:

1. The client and server establish a connection using the TCP protocol.
2. The client sends a ClientHello message to the server, which includes information such as the client's supported TLS versions and cipher suites.
3. The server responds with a ServerHello message, which includes information such as the server's chosen TLS version and cipher suite.
4. The server sends its certificate and public key to the client, and the client verifies the certificate and public key.
5. The client generates a random value (pre-master secret), encrypts it with the server's public key, and sends it to the server.
6. The server decrypts the pre-master secret using its private key and generates a master secret, which is used to generate the session keys for encrypting and decrypting the data exchanged between the client and server.
7. The client and server use the session keys to encrypt and decrypt the data exchanged over the TLS connection.

The TLS process ensures that the communication between the client and server is secure and private, and that the authenticity of the server's certificate and public key can be verified by the client. This is important for protecting the confidentiality and integrity of sensitive information transmitted over the network.

TLS는 당연하게도 SSL과 아키텍쳐가 다르기에 `heartbeat` 취약점을 가지고 있지 않습니다.  
SSL은 주기적으로 제로데이 취약점으로 하트비트 취약점이 발생하고있으며 꾸준히 패치를 하고는 있지만 한계가 크고 심지어 최근 2022-11월 초에도 제로데이 취약점이 발생하였고 업데이트가 1주일정도 걸렸기에 여러 서버운영자들을 긴장하게 하였습니다. 