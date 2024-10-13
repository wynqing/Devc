#include <stdio.h>
#include <stdlib.h>
#define MAX 100
//Cau 10
int checkPrime(int m){//Ham kiem tra m co phai la so nguyen to
	if(m<2)
		return 0;
	for(int i=2; i<m; i++){
		if(m%i==0){
			return 0;
		}
	}
	return 1;
}
int main(int argc, char *argv[]) {
	int a[MAX],n;
	printf("Enter n: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);	
	}
	//In cac so nguyen to trong mang
	for(int i=0; i<n; i++){
		if(checkPrime(a[i])){
			printf("%d ",a[i]);
		}	
	}
	return 0;
}



