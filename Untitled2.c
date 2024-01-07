#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int t, a, b, i, n;

    scanf("%d", &t);

    for (i = 0; i < t; i++) {
    	
        scanf("%d %d", &a, &b);
     printf("%d\n", gcd(a, b)); 

	} 

    return 0;
}
