#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    do {
        printf("Nhap vao mot so nguyen duong n: ");
        scanf("%d", &n);
    } while (n < 0);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%d! = %llu\n", n, factorial);

    return 0;
}

