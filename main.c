#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 18

int main() {
    char input[MAX_DIGITS+1]; // chu?i l�u gi� tr? �ang x�t
    char max_value[MAX_DIGITS+1] = "0"; // chu?i l�u gi� tr? l?n nh?t

    while (scanf("%s", input) == 1) { // �?c c�c gi� tr? t? lu?ng d? li?u
        if (strcmp(input, max_value) > 0) { // so s�nh gi� tr? �ang x�t v?i gi� tr? l?n nh?t
            strcpy(max_value, input); // c?p nh?t gi� tr? l?n nh?t n?u gi� tr? �ang x�t l?n h�n
        }
    }

    printf("Max value: %s\n", max_value); // in ra gi� tr? l?n nh?t

    return 0;
}

