#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 18

int main() {
    char input[MAX_DIGITS+1]; // chu?i lýu giá tr? ðang xét
    char max_value[MAX_DIGITS+1] = "0"; // chu?i lýu giá tr? l?n nh?t

    while (scanf("%s", input) == 1) { // ð?c các giá tr? t? lu?ng d? li?u
        if (strcmp(input, max_value) > 0) { // so sánh giá tr? ðang xét v?i giá tr? l?n nh?t
            strcpy(max_value, input); // c?p nh?t giá tr? l?n nh?t n?u giá tr? ðang xét l?n hõn
        }
    }

    printf("Max value: %s\n", max_value); // in ra giá tr? l?n nh?t

    return 0;
}

