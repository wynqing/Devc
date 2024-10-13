#include <stdio.h>
#include <stdlib.h>
//In ra cac so le
int main(int argc, char *argv[]) {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n ;i++){
		if(i%2 != 0){//so le
			printf("%d ",i);
		}				
	}
	
	return 0;
}
