#include <stdio.h>
#include <math.h>

int chuyenNhiPhanSangThapPhan(int nhiPhan) {
    int thapPhan = 0;
    int coSo = 1;

    while (nhiPhan > 0) {
        int chuSo = nhiPhan % 10;
        thapPhan += chuSo * coSo;
        nhiPhan /= 10;
        coSo *= 2;
    }

    return thapPhan;
}

int main() {
    int nhiPhan;
    printf("Nh?p vào s? nh? phân: ");
    scanf("%d", &nhiPhan);

    int thapPhan = chuyenNhiPhanSangThapPhan(nhiPhan);

    printf("Giá tr? th?p phân: %d\n", thapPhan);
    return 0;
}

