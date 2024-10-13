#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a>b && a>c && a>d)
		printf("So lon nhat: %d",a);
	if(b>a && b>c && b>d)
		printf("So lon nhat: %d",b);
	if(c>a && c>b && c>d)
		printf("So lon nhat: %d",c);
	if(d>a && d>b && d>c)
		printf("So lon nhat: %d",d);		
	return 0;
}
