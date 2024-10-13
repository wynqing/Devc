#include <stdio.h>
#include <stdlib.h>
//Cac uoc so cua n (khong lay n)
int main(int argc, char *argv[]) {
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(int i=1; i<n; i++){
		if(n%i==0)
			printf("%d ",i);
	}
	return 0;
}
