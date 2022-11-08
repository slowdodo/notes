# docker table format option

| Placeholder 	| Description                                                                                   	|
|-------------	|-----------------------------------------------------------------------------------------------	|
| .ID         	| Container ID                                                                                  	|
| .Image      	| Image ID                                                                                      	|
| .Command    	| Quoted command                                                                                	|
| .CreatedAt  	| Time when the container was created.                                                          	|
| .RunningFor 	| Elapsed time since the container was started.                                                 	|
| .Ports      	| Exposed ports.                                                                                	|
| .State      	| Container status (for example; “created”, “running”, “exited”).                               	|
| .Status     	| Container status with details about duration and health-status.                               	|
| .Size       	| Container disk size.                                                                          	|
| .Names      	| Container names.                                                                              	|
| .Labels     	| All labels assigned to the container.                                                         	|
| .Label      	| Value of a specific label for this container. For example '{{.Label "com.docker.swarm.cpu"}}' 	|
| .Mounts     	| Names of the volumes mounted in this container.                                               	|
| .Networks   	| Names of the networks attached to this container.                                             	|

# 예시

``` bash
docker ps -a --format "table {{.ID}}\t{{.Names}}\t{{.Ports}}"
``` 

``` bash
docker inspect (images) --format "{{json .}}"
```

# other option


| Placeholder 	| Description                                                                                   	|
|-------------	|-----------------------------------------------------------------------------------------------	|
| Join          | join concatenates a list of strings to create a single string. It puts a separator between each element in the list.|
| table         | table specifies which fields you want to see its output.|
| json          | json encodes an element as a json string.|
| lower         | lower transforms a string into its lowercase representation |
| split         |  split slices a string into a list of strings separated by a separator.|
| title         | title capitalizes the first character of a string.|
| upper         | upper transforms a string into its uppercase representation.|
| println       | println prints each value on a new line.|
| Hint          | To find out what data can be printed, show all content as json|