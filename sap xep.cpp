#include<stdio.h>

int main(){
	int n =2;
	int a[n];
	for(int i = 0;i<=n;i++){
		scanf("%d",a[i]);
	}
	for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
