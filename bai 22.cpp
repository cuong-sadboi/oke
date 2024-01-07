#include<stdio.h>

int main(){
	int thang;
	printf("Nhap vao thang: ");
	scanf("%d",&thang);
	if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
		printf("Thang co 31 ngay"); 
	} 
    if(thang==4||thang==6||thang==9||thang==11){
    	printf("Thang co 30 ngay"); 
	} 
	if(thang==2){
		printf("Thang co 29 ngay neu la nam nhuan hoac 28 ngay"); 
	} 
	return 0; 
} 
