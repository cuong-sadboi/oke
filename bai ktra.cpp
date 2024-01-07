#include <stdio.h>

// hàm nh?p m?ng s? nguyên
void nhapMang(int a[], int n) {
    printf("Nhap mang co %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

// hàm xu?t m?ng s? nguyên
void xuatMang(int a[], int n) {
    printf("Mang da nhap:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// hàm t?m ki?m m?t s? nguyên x trong m?ng
int timKiem(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i; // tr? v? v? trí c?a x trong m?ng
        }
    }
    return -1; // tr? v? -1 n?u không t?m th?y x trong m?ng
}

// hàm main
int main() {
    int n, x;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n]; // kh?i t?o m?ng a có n ph?n t?

    nhapMang(a, n); // nh?p m?ng a
    xuatMang(a, n); // xu?t m?ng a

    printf("Nhap so can tim kiem: ");
    scanf("%d", &x);

    int viTri = timKiem(a, n, x);
    if (viTri == -1) {
        printf("Khong tim thay %d trong mang\n", x);
    } else {
        printf("%d xuat hien tai vi tri %d trong mang\n", x, viTri);
    }

    return 0;
}
