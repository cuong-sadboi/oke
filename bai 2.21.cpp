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
			phut +=1; 
			giay = 0;
			if(phut == 60){
				gio += 1; 
				phut =0;
				if(gio == 24){
				gio = 0;
			    } 
			} 
		}
	printf("Gio sau do 1 giay la: %02d:%02d:%02d\n",gio,phut,giay); 
	} 
	return 0; 
	
} 
