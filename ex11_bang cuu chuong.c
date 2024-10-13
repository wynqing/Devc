#include <stdio.h>
#include <stdlib.h>
//In ra bang cuu chuong cua n
int main(int argc, char *argv[]) {
	int n;
	do {
		printf("Enter n: ");
		scanf("%d",&n);
	} while(n<2 || n>9);
	
	for(int i=1; i<=10; i++) {
		printf("%d x %d = %d\n",n,i, n*i);
	}


	return 0;
}
