#include <stdio.h>
#include <stdlib.h>
//Tinh tong cac so le
int main(int argc, char *argv[]) {
	int n, sum=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n ;i++){
		if(i%2 !=0){
			printf("%d ",i);
			sum += i; //cong cac so le
		}				
	}
	printf("\nSum = %d",sum);	
	return 0;
}
