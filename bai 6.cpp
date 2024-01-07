#include<stdio.h>

int main(){
	int a,b;
	printf("Nhap a va b:");
	scanf("%d%d",&a,&b);
	printf("a + b = %d\n", a+b);
	printf("a - b = %d\n", a-b);
	printf("a * b = %d\n", a*b);
	printf("a / b = %d\n", a/b);
	if (a/b == 0){
		printf("a khong chia het cho b"); 
	} else{
		printf("a / b = %d du %d", a/b,a%b); 
	} 
	return 0; 
} 
