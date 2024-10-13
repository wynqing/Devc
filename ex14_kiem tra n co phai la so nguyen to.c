#include <stdio.h>
#include <stdlib.h>
//Kiem tra n co phai la so nguyen to hay khong
int main(int argc, char *argv[]) {

	int n, flag=0;
	printf("Enter n: ");
	scanf("%d", &n);
	
	for(int i=2; i<n; i++){
		if(n%i==0){
			flag=1;//bien co duoc bat thanh 1
			break;
		}
	}
	if(flag==0)//neu bien co van o trang thai 0
		printf("%d is prime number.",n);
	else
		printf("%d is not prime number.",n);
    //Cach 2: co the khong dung bien flag, ma dua vao i neu i tang bang n thi n la so nguyen to.
	return 0;
}
