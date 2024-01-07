#include<stdio.h>

int main(){
	int n;
	do{
		scanf("%d", &n);
		if(n >= 1 && n <= 9){
			for(int i=1; i <= 10;i++){
				printf("%d ", n*i); 
			} 
			break; 
		} else{
			printf("Nhap lai \n");
		} 
	} while(1);
	return 0; 
} 
