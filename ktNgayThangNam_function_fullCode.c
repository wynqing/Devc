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

int ktNgayThangNam(int day, int month, int year)
{
	// code hien tai kha dai dong, cac em nen tim cach viet gon lai
	// goi y: gom cac dieu kien tuong tu nhau vao cung mot lenh if (hoac tuong tu)
	if (ktNamNhuan(year) == 1) // xet nam nhuan
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			if (day > 0 && day < 32) // day = 1, 2, ..., 31
				return 1;
		if (month == 2)	
			if (day > 0 && day < 30) // day = 1, 2, ..., 29
				return 1;
		if (month == 4 || month == 6 || month == 9 || month == 11)	
			if (day > 0 && day < 31) // day = 1, 2, ..., 30
				return 1;
	}
	else // khong phai nam nhuan
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			if (day > 0 && day < 32) // day = 1, 2, ..., 31
				return 1;
		if (month == 2)	
			if (day > 0 && day < 29) // day = 1, 2, ..., 28
				return 1;
		if (month == 4 || month == 6 || month == 9 || month == 11)	
			if (day > 0 && day < 31) // day = 1, 2, ..., 30
				return 1;
	}
	
	return 0;
}

int main(int argc, char *argv[]) {
	
	/*nhap vao 3 so nguyen: day, month, year */
	int year;
	printf("year = ");
	scanf("%d", &year);
	int month;
	printf("month = ");
	scanf("%d", &month);
	int day;
	printf("day = ");
	scanf("%d", &day);
   
   	/*hay viet ham kiem tra 3 so vua nhap co tao thanh mot ngay hop le hay khong
	vd: day = 12, month = 8, year = 2024 ==> mot ngay hop le
	vd: day = 35, month = 15, year = 2024 ==> mot ngay khong hop le  
	vd: day = 30, month = 2, year = 2024 ==> mot ngay khong hop le  
	*/
	
	if (ktNgayThangNam(day, month, year) == 1)
		printf("OK");
	else
		printf("Not OK");
	
	return 0;
}
