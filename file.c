#include<stdio.h>
#include<fcntl.h>
int main(){

	char buff[10];
	int fd;
	fd = open("test.txt",O_RDONLY);
	if(fd == -1){
		perror("you can't open file");
	}
	if(read(fd,buff,10)<0){
		perror("you can't read file");
	}
	if(write(2,buff, 10) <0){
		perror("you can't write file");

	}
	close(fd);
}

