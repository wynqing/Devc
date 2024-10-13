#include <stdio.h>
#include <stdlib.h>
//In ra cac so hoan chinh trong pham vi m
int main(int argc, char *argv[]) {
	int n,m, sum;
	printf("Enter m: ");
	scanf("%d",&m);//m=1000
	
	for(int n=2; n<=m; n++){	
		sum = 0;
		//tong cac uoc cua n
		for(int i=1; i<n; i++){
			if(n%i==0){
				sum += i;
			}			
		}
		//kiem tra n co phai la so hoan hao
		if(sum==n)
			printf("%d ",n);
		
	}
	return 0;
}
