#include <stdio.h>
#include <stdlib.h>
// Sao cho 15 so le tren 1 dong
int main(int argc, char *argv[]) {
	int n, count=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n ;i++){
		if(i%2 !=0){
			printf("%d ",i);
			count++;
		}
		if(count%15==0){
			printf("\n");
		}						
	}
	
	return 0;
}
