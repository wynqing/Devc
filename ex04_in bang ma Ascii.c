#include <stdio.h>
#include <stdlib.h>
//In toan bo bang ma ASCII
int main(int argc, char *argv[]) {
	
	for(int i=0; i<128; i++){
		printf("%d  %x  %c\n",i,i,i);
	}
	return 0;
}
