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
    printf("Nh?p v�o s? nh? ph�n: ");
    scanf("%d", &nhiPhan);

    int thapPhan = chuyenNhiPhanSangThapPhan(nhiPhan);

    printf("Gi� tr? th?p ph�n: %d\n", thapPhan);
    return 0;
}

