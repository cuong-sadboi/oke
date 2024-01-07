#include<stdio.h>

void Nhap_N(int &n){
	do  {
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",&n);
	} while (n<2 || n >100);
	}  

int Songuyento(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

 void Lietkesonguyento(int n) {
    int Tontaisonguyento = 0;

    printf("Cac so nguyen to nho hon %d: ", n);
    for (int i = 2; i < n; i++) {
        if (Songuyento(i)) {
            printf("%d ", i);
            Tontaisonguyento = 1;
        }
    }
    printf("\n");

    if (!Tontaisonguyento) {
        printf("Khong ton tai so nguyen to nho hon %d.\n", n);
    }
}

int main(){
	int n;
	Nhap_N(n);
	Lietkesonguyento(n);
	return 0; 
} 
