#include <fcntl.h> 
#include <stdlib.h>
#include <stdio.h> 
#include <unistd.h> 
#include <string.h> 

/******************************************************************************* 
 * this was my first idea for a quine
 * I think it is pretty cheap and doesn't really count
 * but it works if the binary has the same prefix as the source 
 ******************************************************************************/ 
int main(int argc, char** argv){
	
	char filename[10];
	sprintf(filename, "%s.c", argv[0]); 

	int fd = open(filename, O_RDONLY); 

	char read_buffer[716]; 
	memset(read_buffer, '\0', 716); 

	int i = 0; 

	do {
		read(fd, read_buffer + i, 1); 
		i++;
	} while(read_buffer[i - 1] != EOF); 
		
	printf("%s\n", read_buffer);
	return 0;
}
