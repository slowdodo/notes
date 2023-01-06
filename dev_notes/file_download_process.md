When you download a file through a typical web server using a web browser, the following steps occur:
You enter the URL of the file you want to download in the web browser and press enter.
The web browser sends an HTTP request to the web server for the file.
The web server receives the request and sends back an HTTP response containing the file.
The web browser receives the response and displays the file in the appropriate viewer (e.g., a PDF viewer for a PDF file, an image viewer for an image file, etc.).
When you download a file through a typical web server using a router, the following steps occur:
You enter the URL of the file you want to download in the web browser and press enter.
The web browser sends an HTTP request to the web server for the file.
The request passes through the router, which forwards it to the web server.
The web server receives the request and sends back an HTTP response containing the file.
The response passes through the router, which forwards it to the web browser.
The web browser receives the response and displays the file in the appropriate viewer (e.g., a PDF viewer for a PDF file, an image viewer for an image file, etc.).
The router may also include a load balancer, which distributes incoming requests among multiple servers to improve performance and reliability.

When you download a file through a typical web server using an IDS (intrusion detection system), the following steps occur:
You enter the URL of the file you want to download in the web browser and press enter.
The web browser sends an HTTP request to the web server for the file.
The request passes through the IDS, which analyzes it for signs of malicious activity.
If the IDS determines that the request is not malicious, it passes the request on to the web server.
The web server receives the request and sends back an HTTP response containing the file.
The response passes through the IDS, which analyzes it for signs of malicious activity.
If the IDS determines that the response is not malicious, it passes the response on to the web browser.
The web browser receives the response and displays the file in the appropriate viewer (e.g., a PDF viewer for a PDF file, an image viewer for an image file, etc.).
If the IDS detects malicious activity at any point in this process, it may block the request or response and alert the administrator.

You enter the URL of the file you want to download in the web browser and press enter.
The web browser sends an HTTP request to the web server for the file.
The request passes through the IPS, which analyzes it for signs of malicious activity.
If the IPS determines that the request is not malicious, it passes the request on to the web server.
The web server receives the request and sends back an HTTP response containing the file.
The response passes through the IPS, which analyzes it for signs of malicious activity.
If the IPS determines that the response is not malicious, it passes the response on to the web browser.
The web browser receives the response and displays the file in the appropriate viewer (e.g., a PDF viewer for a PDF file, an image viewer for an image file, etc.).
If the IPS detects malicious activity at any point in this process, it may block the request or response and alert the EDR solution, which can take further action to investigate and mitigate the threat.