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

int Demsonguyento(int arr[], int n){
	int sum = 0; 
	for (int i = 0; i < n; i++) {
        if (Songuyento(arr[i])) {
            sum++; 
        }
    }
    printf("So so nguyen to trong mang la: %d\n", sum);
	return sum; 
} 

int Tongsonguyento(int arr[], int n){
	int tong = 0;
	for(int i = 0; i < n;i++){
		if(Songuyento(arr[i])){
			tong += arr[i]; 
		} 
	} 
	printf("Tong so nguyen to: %d\n",tong);
	return 0; 
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

int Sochinhphuong(int n){
	int canbachai = sqrt(n);
	return (pow(canbachai,2) == n); 
} 

int Demsochinhphuong(int arr[], int n){
	int sum = 0; 
	for (int i = 0; i < n; i++) {
        if (Sochinhphuong(arr[i])) {
            sum++; 
        }
    }
    printf("So so chinh phuong trong mang la: %d\n", sum);
	return sum; 
}

int Tongsochinhphuong(int arr[], int n){
	int tong = 0;
	for(int i =0;i < n;i++){
		if(Sochinhphuong(arr[i])){
			tong += arr[i]; 
		} 
	} 
	printf("Tong cac so chinh phuong trong mang: %d\n", tong); 
	return tong; 
} 

void Cacsochinhphuong(int arr[], int n) {
    printf("Cac so chinh phuong trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (Sochinhphuong(arr[i])) {
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
	Demsonguyento(arr, n);
	Tongsonguyento(arr, n); 
	Inrasonguyento(arr, n);
	Demsochinhphuong(arr, n);
	Tongsochinhphuong(arr,n);
	Cacsochinhphuong(arr, n);
	return 0; 
} 
