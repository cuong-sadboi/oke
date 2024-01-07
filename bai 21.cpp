#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao: "); 
	do{
		int gio,phut,giay; 
		scanf("%d", &n); 
		if(n >= 0 && n <= 86399){ 
			gio = n/3600;
			phut = (n- gio*3600)/60;
			giay = (n- gio*3600 - phut*60);
			printf("%02d:%02d:%02d\n",gio,phut,giay); 
			break; 
		} 
	} while(1); 
	return 0; 
} 
