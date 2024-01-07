#include <stdio.h>

int main() {
    int m, n, a;
    scanf("%d %d %d", &m, &n, &a);

    int soHang = m / a;
    if (m % a != 0) {
        soHang++;
    }
    int soCot = n / a;
    if (n % a != 0) {
        soCot++;
    }
    long long soLuongHinhVuong = (long long)soHang * soCot;

    printf("%lld\n", soLuongHinhVuong);

    return 0;
}

