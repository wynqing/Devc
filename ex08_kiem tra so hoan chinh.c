#include <stdio.h>
#include <stdlib.h>
//Kiem tra so hoan chinh. So hoan chinh (perfect number): tong cac uoc so bang chinh no
// 6 = 1+2+3
//28 = 1+2+4+7+14
int main(int argc, char *argv[]) {
	int n, sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	
	//Cac uoc cua n
	for(int i=1; i<n; i++){
		if(n%i==0){
			printf("%d ",i);
			sum += i;
		}			
	}
	//Kiem tra n co phai la so hoan chinh
	if(sum==n)
		printf("\n%d is perfect number",n);
	else
		printf("\n%d isnot perfect number",n);
	return 0;
}
