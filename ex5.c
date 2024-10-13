#include <stdio.h>
#include <stdlib.h>
#define MAX 100
//Cau 5
int main(int argc, char *argv[]) {
	int a[MAX],n,x;
	printf("Enter n: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);	
	}
	printf("Enter x: ");
	scanf("%d",&x);
	
	
	//In ra cac so > x
	for(int i=0; i<n; i++){
		if(a[i]>x){
			printf("%d ",a[i]);
		}	
	}

	return 0;
}



