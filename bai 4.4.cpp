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

void Sochannhohon20(int arr[], int n){
	printf("Cac phan tu chan nho hon 20 la: ");
	for(int i = 0;i<n;i++){
		if(arr[i] % 2 == 0 && arr[i] < 20){
			printf("%d ",arr[i]); 
		} 
	} 
	printf("\n"); 
} 

int main(){
	int n;
	Nhap_N(n);
	int arr[n];
	Nhapmang(arr, n);
	Sochannhohon20(arr, n);
	return 0; 
} 
