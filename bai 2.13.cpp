#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Cac so le nho hon hoac bang %d la:\n", n);
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
        count++;
        if (count == 15) {
            printf("\n");
            count = 0;
        }
    }
    return 0;
}

