#include <stdio.h>
#include <math.h>

double S(int n);

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("S(n) = %lf", S(n));
    return 0;
}

double S(int n) {
    double sum = 0;
    double temp = 0;
    for (int i = 1; i <= n; i++) {
        temp += pow(i, 2);
        if (i % 2 == 0) {
            sum -= 1 / temp;
        } else {
            sum += 1 / temp;
        }
    }
    return sum;
}

