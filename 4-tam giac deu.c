#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%d%d%d", &a, &b, &c);
	
	if(a+b>c && a+c>b && b+c>a){	
		if(a == b && b == c)
			printf("Tam giac deu");
		else if(a==b || b==c || a==c)
				printf("Tam giac can");
		else if((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b))
				printf("Tam giac vuong");
			else
		    	printf("Tam giac thuong");
	}
	else
		printf("Khong phai tam giac");
	
	return 0;
}
