#include<stdio.h>
#include<math.h>

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

int Sochinhphuong(int n){
	int canbachai = sqrt(n);
	return (pow(canbachai,2) == n); 
} 

 void Cacsochinhphuong(int arr[], int n) {
    printf("Cac so chinh phuong trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (Sochinhphuong(arr[i]) && i % 2 == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main(){
	int n;
	Nhap_N(n);
	int arr[n];
	Nhapmang(arr ,n); 
	Cacsochinhphuong(arr, n);
	return 0; 
} 
