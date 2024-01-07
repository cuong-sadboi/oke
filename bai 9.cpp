#include<stdio.h>

int main(){
	int a,b;
	printf("Nhap a va b:");
	scanf("%d%d",&a,&b);
	int tam_thoi = a;
	a = b;
	b = tam_thoi;
	printf("a = %d\nb = %d",a,b);
	return 0; 
} 
