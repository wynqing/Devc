#include <stdio.h>
#include <stdlib.h>
#define MAX 100
//Cau 9
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
	
	//Tim x: No exit/ exit
	for(int i=0; i<n; i++){
		if(a[i]==x){
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("No exit");
	else
		printf("%d exit",x);
	
	return 0;
}



