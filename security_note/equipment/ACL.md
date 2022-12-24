
# ACL 규칙 번호
| Type of ACL  	| Rule Numbers 	| Description                                                                                                                                                                        	|
|--------------	|--------------	|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------	|
| Standard ACL 	| 1-99         	| Used to filter traffic based on the source IP address. Can only be applied to inbound traffic.                                                                                     	|
| Extended ACL 	| 100-199      	| Used to filter traffic based on various criteria, such as the source and destination IP addresses, protocol, and port number. Can be applied to both inbound and outbound traffic. 	|
| Named ACL    	| 200-299      	| Used to create and manage standard ACLs using a name instead of a number.                                                                                                          	|
| Named ACL    	| 800-899      	| Used to create and manage extended ACLs using a name instead of a number.                                                                                                          	|
| Named ACL    	| 900-999      	| Used to create and manage standard and extended ACLs using a name instead of a number.                                                                                             	|
| Dynamic ACL  	| 1100-1199    	| Used to create temporary ACLs that are automatically removed after a specified time period. Can be either standard or extended ACLs.                                               	|

# Extended ACL list 

``` bash
Router(config)# access-list [acl-number] [permit|deny] [protocol] [source-ip] [source-wildcard] [destination-ip] [destination-wildcard] [operator] [port]
```

``` bash
Router(config)# access-list 100 permit tcp 10.0.0.1 0.0.0.0 10.0.0.2 0.0.0.0 eq 80
```

This example creates an extended ACL with the number 100 and a rule that permits TCP traffic from the source IP address 10.0.0.1 to the destination IP address 10.0.0.2 on port 80 (HTTP). The wildcard masks (0.0.0.0) indicate that the entire IP address should be used for the source and destination.

I hope this helps to give you an idea of the syntax and structure of an extended ACL. Please let me know if you have any other questions.