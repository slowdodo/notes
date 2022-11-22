sudo docker run --name mysql -e MYSQL_ROOT_PASSWORD=1234 -v mysql:/var/lib/mysql -d -p 3306:3306 mysql:8.0.31
