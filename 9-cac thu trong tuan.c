#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);

	switch(x) {
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
		case 8:
			printf("Sunday");
			break;
		default:
			printf("No support");
	}

	return 0;
}
