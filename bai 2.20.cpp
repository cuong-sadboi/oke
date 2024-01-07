#include<stdio.h>

int main(){
	int a,b,c; 
	for(a=1;a<1000;a++){
		for(b=1;b<1000;b++){
			for(c=1;c<1000;c++){
				if(a*b*c == a+b+c){
					printf("ba so do la: %d %d %d\n",a,b,c); 
				} 
			} 
		} 
	} 
	return 0; 
} 
