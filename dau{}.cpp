#include <stdio.h>

int isBalanced(char str[]) {
    int count = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '{') {
            count++;
        } else if (str[i] == '}') {
            count--;
        }
        
        if (count < 0) {
            return 0;  // S? d?u '}' xu?t hi?n tru?c d?u '{'
        }
    }
    
    return count == 0;  // S? d?u '{' và '}' b?ng nhau
}

int main() {
    char str[101];
    scanf("%s", str);
    
    if (isBalanced(str)) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }
    
    return 0;
}

