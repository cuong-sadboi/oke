#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap vao: ");
		scanf("%d",&n);
		if(n > 0){
			for(int i =1;i<=n;i++){
				if(i%2 ==0 ){
					continue; 
				} else{
					printf("%d ",i); 
				} 
			} 
		} else {
			printf("Nhap lai!\n"); 
		} 
	} while(1); 
} 
