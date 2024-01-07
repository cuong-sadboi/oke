#include<stdio.h>

int main(){
	int n, sum =0;
	printf("Nhap vao: ") ;
	scanf("%d", &n);
	for(int i = 1;i <= n;i++){
		if(n % i != 0){
			continue; 
		} else{
			sum += 1; 
		} 
	} 
	printf("Uoc cua so do la: %d", sum); 
	return 0; 
} 
