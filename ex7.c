#include <stdio.h>
#include <stdlib.h>
#define MAX 100
//Cau 7
int main(int argc, char *argv[]) {
	int a[MAX],n, max;
	printf("Enter n: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);	
	}
	
	//Tim so lon nhat co trong mang
	max = a[0];
	for(int i=1; i<n; i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	printf("Max: %d", max);	
	return 0;
}



