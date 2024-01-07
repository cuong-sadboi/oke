#include <stdio.h>

int main() {
    int num;

    printf("Nhap vao mot so co 3 chu so: ");
    scanf("%d", &num);

    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;

    if (a >= b && a >= c) {
        printf("So lon nhat la %d o vi tri hang tram\n", a);
    } else if (b >= a && b >= c) {
        printf("So lon nhat la %d o vi tri hang chuc\n", b);
    } else {
        printf("So lon nhat la %d o vi tri hang don vi\n", c);
    }

    return 0;
}

