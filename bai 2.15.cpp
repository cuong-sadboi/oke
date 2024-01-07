#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("%d la so nguyen to.", n);
    } else {
        printf("%d khong phai la so nguyen to.", n);
    }

    return 0;
}

