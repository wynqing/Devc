#include <stdio.h>
#include <stdlib.h>
//Tinh giai thua cua n
int main(int argc, char *argv[]) {
	int n;
	double factorial=1;
	do {
		printf("Enter n: ");
		scanf("%d",&n);
	} while(n<0);
	
	for(int i=1; i<=n; i++){
		factorial *= i;
	}
	printf("%d! = %.0lf", n, factorial);	
		
	return 0;
}
