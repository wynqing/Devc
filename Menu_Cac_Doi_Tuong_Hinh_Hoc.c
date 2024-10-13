#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float cvHinhVuong(float c ){
	return	4 * c;
}

float dtHinhVuong(float c ){
	return	c * c;
}

float cvHinhChuNhat(float d , float r ){
	return	(d+r)*2;
}

float dtHinhChuNhat(float d , float r ){
	return d*r;
}

float cvHinhTron(float r ){
	const double PI = 3.14;
	return PI * r * 2;
}

float dtHinhTron(float r ){
	const double PI = 3.14;
	return PI * r * r;
}

float cvHinhTamGiac(float a , float b , float c ){
	return a + b + c;
}

float dtHinhTamGiac(float a , float b , float c){
	/* yeu cau: su dung cong thuc Heron de tinh
		gia su 3 canh cua tam giac la a, b, c
		buoc 1: tinh p = (a+b+c)/2
		buoc 2: dien tich = can bac hai cua (p(p-a)(p-b)(p-c))
	*/
	float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void showMenu(){
	printf("\n\n\n   chuong trinh thuc hien cac chuc nang sau day:");
	printf("\n0. thoat chuong trinh");
	printf("\n1. tinh chu vi hinh vuong");
	printf("\n2. tinh dien tich hinh vuong");
	printf("\n3. tinh chu vi hinh chu nhat");
	printf("\n4. tinh dien tich hinh chu nhat");
	printf("\n5. tinh chu vi hinh tron");
	printf("\n6. tinh dien tich hinh tron");
	printf("\n7. tinh chu vi hinh tam giac");
	printf("\n8. tinh dien tich hinh tam giac bang cong thuc Heron");
	printf("\n\n   Moi ban lua chon:  ");
}

int main(int argc, char *argv[]) {
	/*
	viet menu
	0. thoat chuong trinh
	1. tinh chu vi hinh vuong
	2. tinh dien tich hinh vuong
	3. tinh chu vi hinh chu nhat
	4. tinh dien tich hinh chu nhat
	5. tinh chu vi hinh trong
	6. tinh dien tich hinh tron
	7. tinh chu vi hinh tam giac
	8. tinh dien tich hinh tam giac
	
	sau do in ket qua sum ra man hinh
	*/

	int choice;
	showMenu();
	scanf("%d", &choice);
	
	while (choice != 0){
		switch(choice)
		{
			case 1:
			{
				float c; 
				printf("Nhap c= ");
				scanf("%f", &c);
				float cv = cvHinhVuong(c);
				printf("Chu vi cua hinh vuong la: %f", cv);
				break;
			}
			case 2:
			{
				float c; 
				printf("Nhap c= ");
				scanf("%f", &c);
				float dt = dtHinhVuong(c);
				printf("Dien tich cua hinh vuong la: %f", dt);
				break;
			}

			case 3:
			{
				float d;
				float r;
				printf("Nhap d= ");
				scanf("%f", &d);
				printf("Nhap r= ");
				scanf("%f", &r);
				float cv = cvHinhChuNhat(d,r);
				printf("Chu vi cua hinh chu nhat la: %f", cv);
				break;
			}
			
			case 4:
			{
				float d;
				float r;
				printf("Nhap d= ");
				scanf("%f", &d);
				printf("Nhap r= ");
				scanf("%f", &r);
				float dt = dtHinhChuNhat(d,r);
				printf("Dien tich cua hinh chu nhat la: %f", dt);
				break;
			}
			
			case 5:
			{
				float r;
				printf("Nhap r= ");
				scanf("%f", &r);
				float cv = cvHinhTron(r);
				printf("Chu vi cua hinh tron la: %f", cv);
				break;
			}
			
			case 6:
			{
				float r;
				printf("Nhap r= ");
				scanf("%f", &r);
				float dt = dtHinhTron(r);
				printf("Dien tich cua hinh tron la: %f", dt);
				break;
			}
			
			case 7:
			{
				float a;
				float b;
				float c;
				printf("Nhap a= ");
				scanf("%f", &a);
				printf("Nhap b= ");
				scanf("%f", &b);
				printf("Nhap c=");
				scanf("%f", &c);
				float cv = cvHinhTamGiac(a,b,c);
				printf("Chu vi cua hinh tam giac la: %f", cv);
				break;
			}
			
			case 8:
			{
				float a;
				float b;
				float c;
				printf("Nhap a= ");
				scanf("%f", &a);
				printf("Nhap b= ");
				scanf("%f", &b);
				printf("Nhap c=");
				scanf("%f", &c);
				float dt = dtHinhTamGiac(a,b,c);
				printf("Dien tich cua hinh tam giac la: %f", dt);
				break;
			}
			
			default:
			{
				printf("nhap lai di ban oiiiiii \n");
			}
}
		
		showMenu();
		scanf("%d", &choice);
}
	return 0;

}
