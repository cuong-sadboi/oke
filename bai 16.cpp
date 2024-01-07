#include <stdio.h>

int main() {
    int n;

    printf("Nhap vao mot so co 3 chu so: ");
    scanf("%d", &n);

    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;

    if (a <= b && a <= c) {
        printf("%d ", a);
        if (b <= c) {
            printf("%d %d\n", b, c);
        } else {
            printf("%d %d\n", c, b);
        }
    } else if (b <= a && b <= c) {
        printf("%d ", b);
        if (a <= c) {
            printf("%d %d\n", a, c);
        } else {
            printf("%d %d\n", c, a);
        }
    } else {
        printf("%d ", c);
        if (a <= b) {
            printf("%d %d\n", a, b);
        } else {
            printf("%d %d\n", b, a);
        }
    }

    return 0;
}

