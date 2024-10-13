#include <stdio.h>
#include <stdlib.h>
#define MAX 100
//Cau 6
int main(int argc, char *argv[]) {
	int a[MAX],n, min;
	printf("Enter n: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);	
	}
	
	//Tim so nho nhat co trong mang
	min = a[0];
	for(int i=1; i<n; i++){
		if(min > a[i]){
			min = a[i];
		}
	}
	printf("Min: %d", min);	
	return 0;
}



