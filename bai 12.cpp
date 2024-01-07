#include<stdio.h>

int main(){
	int a,b,c, max;
	printf("nhap vao a va b va c : "); 
	scanf("%d%d%d",&a,&b,&c);
    max = a;
	if (b > max){
		max = b; 
	} 
	if (c > max){
		max = c; 
	} 
	printf("So lon nhat la: %d", max); 
	return 0; 
} 
