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

int Tongsole(int arr[], int n){
	int tong = 0;
	for(int i = 0;i < n; i++){
		if(arr[i] % 2 != 0){
			tong += arr[i];
		} 
	} 
	printf("Tong cac phan tu le la: %d\n",tong);
	return tong; 
}  

int main(){
	int n;
	Nhap_N(n);
	int arr[n];
	Nhapmang(arr, n);
	Tongsole(arr, n);
	return 0; 
} 
