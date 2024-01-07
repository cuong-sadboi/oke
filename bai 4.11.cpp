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

void Timvitri(int arr[], int n){
	int m;
	printf("Nhap vao phan tu can tim: ");
	scanf("%d",&m);
	
	for(int j=0;j<n;j++){
			int dem = 0;
		if(m == arr[j]){
	printf("Vi tri co gia tri bang m la: ") ;
    for (int i = 0; i < n; i++) {
        if (m == arr[i]) {
        	printf("%d ", i);
            dem++;            
        }
    } 
    printf("\n");
	printf("So luong phan tu co gia tri bang m la: %d",dem); 
	break; 
} else{
	
	printf("Khong tim thay");
}
}
} 

int main(){
	int n;
	Nhap_N(n);
	int arr[n];
	Nhapmang(arr, n); 
	Timvitri(arr, n);
	return 0; 
} 
