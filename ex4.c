#include <stdio.h>
#include <stdlib.h>
#define MAX 100
//Cau 4
int main(int argc, char *argv[]) {
	int a[MAX],n, sum=0;
	printf("Enter n: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);	
	}
	//Tinh tong cac so chan trong mang
	for(int i=0; i<n; i++){
		if(a[i]%2==0){
			sum += a[i];
		}	
	}
	printf("Sum: %d",sum);
	return 0;
}



