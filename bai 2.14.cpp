#include<stdio.h>

int main(){
	int n;
		int sum = 0; 
		printf("Nhap vao: ");
		scanf("%d",&n);
		if(n > 0){
			for(int i =1;i<=n;i++){
				if(i%2 ==0 ){
					continue; 
				} else{
					sum += i; 
				}  
			} 
		} else {
			printf("Nhap lai!\n"); 
		} 
	
	printf("%d", sum); 
	return 0; 
} 
