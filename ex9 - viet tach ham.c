#include <stdio.h>
#include <stdlib.h>
#define MAX 100
//Cau 9
int findValue(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if(a[i]==x){
			return 1;
		}
	}
	return 0;
}
int main(int argc, char *argv[]) {
	int a[MAX],n,x, flag=0;
	printf("Enter n: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);	
	}
	printf("Enter x: ");
	scanf("%d",&x);
	
	
	if(findValue(a,n,x))
		printf("%d exit",x);
	else
		printf("No exit");
	
	return 0;
}



