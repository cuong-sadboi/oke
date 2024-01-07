#include<stdio.h>

int main(){
	int a,b,c,d;
	printf("Nhap vao 4 so:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	float tbc;
	tbc = (float)(a+b+c+d)/4; 
	printf("trung binh cong 4 so la: %.2f", tbc);
	return 0; 
} 
