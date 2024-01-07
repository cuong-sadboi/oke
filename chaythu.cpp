#include<stdio.h>
void nhap_n(int &n){
	do{
		printf("nhap n:");
		scanf("%d", &n);
	}while(n<=1 || n>=100);
}
void nhapmang(int arr[], int & n){
	printf("nhap phan tu mang:\n");
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}
void xuatmang(int arr[],int&n){
	printf("mang vua nhap:");
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}printf("\n");
}
int main(){
	int n;
	nhap_n(n);
	int arr[n];
	nhapmang(arr,n);
	xuatmang(arr,n);
	return 0;
}
