#include <stdio.h>

int main() {
    int n, i, num, min, max;

    printf("Nhap so luong so nguyen can nhap: ");
    scanf("%d", &n);

    printf("Nhap %d so nguyen:", n);
    scanf("%d", &num);

    min = num; 
    max = num;

    for (i = 2; i <= n; i++) {
        scanf("%d", &num);
        if (num < min) {
            min = num;  
        }
        if (num > max) {
 
    max = num;   
        }
    }

    printf("So nho nhat la %d\n", min);
    printf("So lon nhat la %d\n", max);

    return 0;
}

