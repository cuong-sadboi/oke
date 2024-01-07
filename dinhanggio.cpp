#include<stdio.h>

int main(){
	long n,gio=0,phut=0,giay=0;
	scanf("%l",&n);
	gio = n/3600;
	phut = (n-(gio*3600))/60;
	giay = n -(gio*3600)-(phut*60);
	printf("%02l:%02l:%02l\n",gio,phut,giay);
	return 0; 
} 
