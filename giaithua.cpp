#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    if (n< 0) {
        printf("S? ph?i l� m?t s? nguy�n duong.\n");
    } else {
        unsigned long long result = factorial(n);
        printf("%llu",result);
    }
    
    return 0;
}

