#include<stdio.h>

int main(){
	int dung, nam, gia;
	for(dung = 1;dung<100;dung++){
		for(nam = 1;nam<100;nam++){
			for(gia = 1;gia<100;gia++){
				if((dung+nam+gia==100)&&(15*dung+9*nam+gia==300)){
					printf("trau dung: %d\n",dung);
					printf("trau nam: %d\n",nam);
					printf("trau gia: %d\n\n",gia); 
				} 
			} 
		} 
	} 
	return 0; 
} 
