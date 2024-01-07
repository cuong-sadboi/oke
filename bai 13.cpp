#include<stdio.h>

int main(){
	int a,b,c,d, max;
	printf("nhap vao a va b va c va d  : "); 
	scanf("%d%d%d%d",&a,&b,&c,&d);
    max = a;
	if (b > max){
		max = b; 
	} 
	if (c > max){
		max = c; 
	} 
	if (d > max){
		max = d; 
	} 
	if((b >= a)&&(b >= c)&&(b >= d)){
		max = b; 
	} 
	if((c >= a)&&(c >= b)&&(c >= d)){
		max = c; 
	}
	if((d >= a)&&(d >= b)&&(d >= c)){
		max = d; 
	} 
	printf("So lon nhat la: %d", max); 
	return 0; 
} 
