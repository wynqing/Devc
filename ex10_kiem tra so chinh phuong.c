#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Kiem tra n co phai la so chinh phuong
int main(int argc, char *argv[]) {
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	if(sqrt(n)==(int)sqrt(n))
		printf("%d is square number",n);
	else
		printf("%d isnot square number",n);
	return 0;
}
