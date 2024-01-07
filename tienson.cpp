#include <stdio.h>

#define MAX_POINTS 100

// Hàm ki?m tra xem hai do?n th?ng có 4 di?m khác nhau không
int hasFourDistinctPoints(int line1[], int line2[]) {
    int count = 0;
    
    // Ð?m s? di?m khác nhau gi?a hai do?n th?ng
    for (int i = 0; i < 4; i++) {
        if (line1[i] != line2[i]) {
            count++;
        }
    }
    
    return count == 4;
}

int main() {
    int n;
    printf("Nhap vao so diem (n > 3): ");
    scanf("%d", &n);
    
    if (n <= 3) {
        printf("So diem nhap vao khong hop le.\n");
        return 0;
    }
    
    // T?o m?t m?ng 2 chi?u d? luu tr? thông tin v? do?n th?ng
    int lines[MAX_POINTS - 1][2];
    
    // Nh?p thông tin v? các do?n th?ng
    printf("Nhap vao %d doan thang:\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        printf("Doan thang %d: ", i + 1);
        scanf("%d %d", &lines[i][0], &lines[i][1]);
    }
    
    // Ki?m tra xem có hai do?n th?ng nào có 4 di?m khác nhau hay không
    int hasFourDistinct = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            if (hasFourDistinctPoints(lines[i], lines[j])) {
                hasFourDistinct = 1;
                break;
            }
        }
        if (hasFourDistinct) {
            break;
        }
    }
    
    // In k?t qu?
    if (hasFourDistinct) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
    
    return 0;
}

