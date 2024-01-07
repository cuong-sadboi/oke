#include <stdio.h>
#include <string.h>

int main() {
    char a[100005], b[100005], c[200010];
    scanf("%s %s", a, b);

    long len_a = strlen(a);
    long len_b = strlen(b);

    long i = 0, j = 0, k = 0;
    while (i < len_a && j < len_b) {
        if (a[i] > b[j]) {
            c[k++] = a[i++];
        } else if (a[i] < b[j]) {
            c[k++] = b[j++];
        } else {
            int x = i, y = j;
            while (x < len_a && y < len_b && a[x] == b[y]) {
                x++;
                y++;
            }
            if(a[x]<a[x-1] || b[y]<b[y-1]){
            	c[k++] = a[i++];
                j++;
			} else{
            if (x >= len_a || (y < len_b && a[x] > b[y])) {
                c[k++] = a[i++];
            } else {
                c[k++] = b[j++];
            }
        }
        }
    }
    while (i < len_a) {
        c[k++] = a[i++];
    }
    while (j < len_b) {
        c[k++] = b[j++];
    }
    c[k] = '\0';

    printf("%s\n", c);

    return 0;
}

