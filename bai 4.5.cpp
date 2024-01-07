#include<stdio.h>

void Nhap_N(int &n){
	do  {
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",&n);
	} while (n<2 || n >100);
	}  
	
void Nhapmang(int arr[], int &n) {
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
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

void Inrasonguyento(int arr[], int n) {
    printf("Cac so nguyen to trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (Songuyento(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main(){
	int n;
	Nhap_N(n);
	int arr[n];
	Nhapmang(arr, n);
	Inrasonguyento(arr, n);
	return 0; 
} 
