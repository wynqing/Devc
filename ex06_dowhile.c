#include <stdio.h>
#include <stdlib.h>
//Tinh tong cac so den khi nhap 0 thi stop
//do...while
int main(int argc, char *argv[]) {
	int x, total=0;

	do{		
		scanf("%d", &x);
		total += x;
	}while(x!=0);
	
	printf("Total: %d",total);
	return 0;
}
