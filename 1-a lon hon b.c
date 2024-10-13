#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a,b;
	scanf("%d%d", &a, &b);
	
	if(a>b)
		printf("%d lon hon %d",a,b);
	else
		printf("%d lon hon %d",b,a);
	
	return 0;
}
