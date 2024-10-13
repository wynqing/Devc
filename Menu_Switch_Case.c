#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int computeSum(int a, int b){
	int sum = a + b;
	return sum;
}

int computeMultiplication(int a, int b){
	int t = a * b;
	return t;
}

float computeCau03(int a, int b, float x){
	float t = a * x + b;
	return t;
}

void showMenu(){
	printf("\n\n\n   chuong trinh thuc hien cac chuc nang sau day:");
	printf("\n0. thoat chuong trinh");
	printf("\n1. tinh tong result = a + b");
	printf("\n2. tinh tich result = a * b");
	printf("\n3. tinh ham bac nhat result = ax + b");
	printf("\n\n   Moi ban lua chon:  ");
}

int main(int argc, char *argv[]) {
	/*
	khai bao a, b, x
	nhap vao ba bien a, b, x
	viet menu
	0. thoat chuong trinh
	1. tinh tong result = a + b
	2. tinh tich result = a * b
	3. tinh ham bac nhat result = ax + b
	
	sau do in ket qua sum ra man hinh
	*/
	
	int a;
	int b;
	float x;
	
	printf("nhap a= ");
	scanf("%d", &a);
	printf("nhap b= ");
	scanf("%d", &b);
	printf("nhap x= ");
	scanf("%f", &x);

	int choice;
	showMenu();
	scanf("%d", &choice);
	
	while (choice != 0){
		switch(choice)
		{
			case 1:
			{
				int result = computeSum(a,b);
				printf("Tong = %d", result);
				break;
			}
			
			case 2:
			{
				int result = computeMultiplication(a,b);
				printf("Tich = %d", result);
				break;
			}
			
			case 3:
			{
				float result = computeCau03(a,b,x);
				printf("Ket qua = %f", result);
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
