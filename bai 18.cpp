#include<stdio.h>

int main(){
	int a,b,c;
	printf("Nhap vao do dai 3 canh: ");
	scanf("%d%d%d",&a,&b,&c);
	if((a == b) && (b == c)){
		printf("tam giac la tam giac deu"); 
	} else {
		printf("tam giac ko la tam giac deu"); 
	} 
	return 0; 
} 
