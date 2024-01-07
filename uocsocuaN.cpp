#include<stdio.h>

int main(){
	int sum,a;
	sum = 0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if(a%i == 0){
			sum ++; 
		} 
	} 
	printf("%d",sum); 
	return 0; 
} 
