#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*nhap vao so nguyen n*/
	int n;
	printf("n= ");
	scanf("%d", &n);
	
	/*tim so dao nguoc bang vong lap while n*/
	int r =0;
	int i=0;
	while (n > 0)
	{
		printf("lan lap thu %d \n", i);
		i++;
		printf("so dao nguoc hien tai: %d \n", r);
		printf("so ban dau con lai: %d \n", n);
		printf("hang don vi: %d \n", n%10);
		r = 10*r + n%10;
		n/=10;
		printf("so dao nguoc moi: %d \n", r);
		printf("so ban dau moi: %d \n\n\n", n);
	}
	printf("so dao nguoc= %d \n", r);

	return 0;
}