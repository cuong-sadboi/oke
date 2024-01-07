#include <stdio.h>

int main()
{
    long long n;
    int binary[10], i = 0;

    printf("Nhap vao mot so nguyen khong qua 10 chu so: ");
    scanf("%lld", &n);

    while (n > 0 && i < 10) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Gia tri nhi phan cua so la: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);

    return 0;
}

