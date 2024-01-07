#include<stdio.h>
int main() {
	int n;
	do{
	printf("Nhap vao 1 so tu nhien: ");
	scanf("%d", &n);
	if (n >= 2 && n <= 1000) {
		printf("Cac so nguyen to la: "); 
		for (int i = 2; i <= n; i++) {
			int iloveyou = 1;
			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					iloveyou = 0;
					break;
				}
			} 
			if (iloveyou) {
				printf("%d ", i);
			}
		}
		break; 
	}
	else {
		printf("Nhap lai \n");
	}
    } while(1); 
	return 0;
}
