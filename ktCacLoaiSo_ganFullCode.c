#include <stdio.h>
#include <math.h>

/* Các hàm ki?m tra s? nguyên t?, s? ch?n, s? chính phuong, s? hoàn h?o, s? d?i x?ng */
int isPrime(int n) {
    if (n <= 1) return 0; // S? nh? hon ho?c b?ng 1 không ph?i là s? nguyên t?
    if (n == 2) return 1; // 2 là s? nguyên t?
    if (n % 2 == 0) return 0; // Các s? ch?n khác 2 không ph?i là s? nguyên t?
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isEven(int n) {
    return (n % 2 == 0);
}

int isSquare(int n) {
    if (n < 0) return 0;
    int root = (int)sqrt(n);
    return (root * root == n);
}

int isPerfect(int n) {
    if (n <= 0) return 0;
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }
    return (sum == n);
}

int reverse(int n) {
    int r = 0;
    while (n > 0) {
        r = 10 * r + n % 10;
        n /= 10;
    }
    return r;
}

int isPalindrome(int n) {
    return (n == reverse(n));
}

/* Hàm ki?m tra s? FPT */
int isFPT(int n) {
    int sumDigits = 0, temp = n;
    while (temp > 0) {
        sumDigits += temp % 10;
        temp /= 10;
    }
    return (sumDigits != 0 && n % sumDigits == 0);
}

int main() {
    int a, choice;
    
    printf("Nhap so nguyen > 0: ");
    scanf("%d", &a);
    while (a <= 0) {
        printf("So phai lon hon 0. Nhap lai: ");
        scanf("%d", &a);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Kiem tra so chan\n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Kiem tra so chinh phuong\n");
        printf("4. Kiem tra so hoan hao\n");
        printf("5. Kiem tra so doi xung\n");
        printf("6. Kiem tra so FPT\n");
        printf("7. Thoat\n");
        printf("Chon chuc nang (1-7): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (isEven(a)) {
                    printf("Day la so chan\n");
                } else {
                    printf("Day la so le\n");
                }
                break;
            case 2:
                if (isPrime(a)) {
                    printf("Day la so nguyen to\n");
                } else {
                    printf("Day khong phai la so nguyen to\n");
                }
                break;
            case 3:
                if (isSquare(a)) {
                    printf("Day la so chinh phuong\n");
                } else {
                    printf("Day khong phai la so chinh phuong\n");
                }
                break;
            case 4:
                if (isPerfect(a)) {
                    printf("Day la so hoan hao\n");
                } else {
                    printf("Day khong phai la so hoan hao\n");
                }
                break;
            case 5:
                if (isPalindrome(a)) {
                    printf("Day la so doi xung\n");
                } else {
                    printf("Day khong phai la so doi xung\n");
                }
                break;
            case 6:
                if (isFPT(a)) {
                    printf("Day la so FPT\n");
                } else {
                    printf("Day khong phai la so FPT\n");
                }
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 7);

    return 0;
}

