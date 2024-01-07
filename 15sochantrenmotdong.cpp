#include <stdio.h>

void printEvenNumbers(int n) {
    int count = 0;  
    int num = 2;    

    while (num <= n) {
        printf("%d ", num);
        count++;

        if (count % 15 == 0) {
            printf("\n");
        }

        num += 2;  
    }
}

int main() {
    int n;

    scanf("%d", &n);

 
    printEvenNumbers(n);

    return 0;
}

