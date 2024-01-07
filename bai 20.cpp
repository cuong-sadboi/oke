#include<stdio.h>
int main(){
	int t,l,h;
	printf("Nhap diem toan ly hoa: ");
	scanf("%d%d%d",&t,&l,&h);
	int sum = t + l + h;
	if(sum >= 15 && t >= 4 && l >= 4 && h >= 4){
		printf("Thi dau\n");
		if(t >= 5 && l >= 5 && h >= 5){
			printf("Hoc deu cac mon"); 
		} else {
			printf("Hoc chua deu cac mon"); 
		} 
	} else {
		printf("Thi hong"); 
	} 
	return 0; 
} 
