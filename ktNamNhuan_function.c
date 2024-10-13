#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ktNamNhuan(int year)
{
	if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
		return 1;
	else
		return 0;
}

int main(int argc, char *argv[]) {
	
	/*nhap vao so nam n */
	int year;
	printf("year = ");
	scanf("%d", &year);
   
   	if (ktNamNhuan(year) == 1)
      	printf("%d la mot nam nhuan", year);
   	else
      	printf("%d khong phai la nam nhuan", year);
      
	return 0;
}
