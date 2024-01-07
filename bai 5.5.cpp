#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void countMaxCharacterFrequency() {
    char str[MAX_LENGTH];
    int frequency[256] = {0}; 

    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    for (int i = 0; i < len; i++) {
        char ch = str[i];
        frequency[(int)ch]++;
    }

    int maxFrequency = 0;
    char maxChar;
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            maxChar = (char)i;
        }
    }

    printf("Ky tu xuat hien nhieu nhat: '%c' (%d lan)\n", maxChar, maxFrequency);
}

int countCharacters(const char *str) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            count++;
        }
    }
    printf("So ky tu trong chuoi: %d\n", count);
    return count;
}

int dem_khoang_trang(char *chuoi) {
    int count = 0;
    while (*chuoi) {
        if (*chuoi == ' ') {
            count++;
        }
        chuoi++;
    }
    printf("So luong khoang trong: %d\n", dem_khoang_trang);
    return count;
}

void findLongestWord() {
    char str[MAX_LENGTH];
    char longestWord[MAX_LENGTH] = {0};

    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    int maxWordLength = 0;
    int currentWordLength = 0;
    int wordStart = 0;

    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            currentWordLength = i - wordStart;

            if (currentWordLength > maxWordLength) {
                strncpy(longestWord, str + wordStart, currentWordLength);
                longestWord[currentWordLength] = '\0';
                maxWordLength = currentWordLength;
            }

            wordStart = i + 1;
        }
    }

    printf("Tu dai nhat trong chuoi: %s\n", longestWord);
}

int main() {
    countMaxCharacterFrequency();
    findLongestWord();
    return 0;
}

