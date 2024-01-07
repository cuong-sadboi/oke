#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if (n >= 2 && n <= 100) {
		for (int i = 2; i <= n; i++) {
			for (int j = 2; j < i; i++) {
				if (i % j != 0) {
					printf("%d", i);
				}
			}
		}
	}
	else {
		printf("Nhap lai");
	}
	return 0;
}
