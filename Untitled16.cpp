#include <stdio.h>

int gcd(int a, int b);

int main() {
    int a, b;

    printf("Nhap hai so nguyen duong: ");
    scanf("%d %d", &a, &b);

    printf("Uoc chung lon nhat cua %d va %d la: %d", a, b, gcd(a, b));

    return 0;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

