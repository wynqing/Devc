#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main(int argc, char *argv[]) {
	int a[MAX];
	int n;
	//input
	printf("Enter n: ");
	scanf("%d",&n);	
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
		
	//output
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);			
	}		

	return 0;
}



