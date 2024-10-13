#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int x,max;
	//so thu nhat
	scanf("%d", &x);
	max = x;
	
	//so thu hai
	scanf("%d", &x);
	if(x>max)
		max = x;
	
	//so thu ba
	scanf("%d", &x);
	if(x>max)
		max = x;
	
	//so thu tu	
	scanf("%d", &x);
	if(x>max)
		max = x;
				
	printf("So lon nhat: %d",max);
	
	return 0;
}
