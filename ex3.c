#include <stdio.h>
#include <stdlib.h>
#define MAX 100
//Cau 3
int main(int argc, char *argv[]) {
	int a[MAX],n;
	printf("Enter n: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);	
	}
	//In ra cac so chan co trong mang
	for(int i=0; i<n; i++){
		if(a[i]%2==0){
			printf("%d ",a[i]);
		}	
	}
	return 0;
}



