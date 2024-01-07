#include<stdio.h>

int main(){
	int gio,phut,giay;
	printf("Nhap vao : ");
	scanf("%d%d%d",&gio,&phut,&giay);
	if(gio<0 || gio>23){
		printf("gio ko hop le"); 
	} else if(phut<0 || phut>60){
		printf("phut ko hop le"); 
	} else if(giay<0 || giay >60){
		printf("giay ko hop le"); 
	} else{
		giay += 1;
		if(giay == 60){
			giay == 0;
			phut += 1;
			if(phut == 60){
				phut ==0;
				gio += 1;
				if(gio == 23);
				gio == 0; 
			} 
		} 
	} 
	return 0; 
	
} 
