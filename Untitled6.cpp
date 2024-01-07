#include <stdio.h>

int main() {
    int n;
    printf("Nhap vao mot so tu nhien: ");
    scanf("%d", &n);
    printf("Cac so nguyen to nho hon hoac bang %d la:\n", n);
    for (int i = 2; i <= n; i++) {
        int isPrime = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

