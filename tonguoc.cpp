#include <stdio.h>

int tinhTongUoc(int num) {
    int tongUoc = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            tongUoc += i;
        }
    }
    return tongUoc;
}

int laBanThan(int a, int b) {
    int tongA = tinhTongUoc(a);
    int tongB = tinhTongUoc(b);
    return (tongA == b) && (tongB == a);
}

int main() {
    int a, b;
    printf("Nhap hai so nguyen a va b cach nhau mot khoang trang: ");
    scanf("%d %d", &a, &b);

    if (laBanThan(a, b)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

