#include <stdio.h>
#include <stdlib.h>
//In mot phan bang ma ASCII tu ky tu c1 den ky tu c2
int main(int argc, char *argv[]) {
	char c1,c2;
	printf("Enter first character: ");
	scanf("%c",&c1);
	printf("Enter second character: ");
	fflush(stdin);//xoa buffer truoc khi nhap c2
	scanf("%c",&c2);
	
	for(int i=c1; i<=c2; i++){
		printf("%d  %x  %c\n",i,i,i);
	}
	return 0;
}
