#include<stdio.h>
#include<math.h> 

int main(){
	float r;
	int rr; 
	rr == (int)r; 
	float pi=3.14; 
	scanf("%f",&r);
	if(rr == r){
		int chuvi,dientich;
		chuvi = 2*pi*r;
		dientich = pi*pow(r,2);
		printf("%d\n",chuvi);
        printf("%d",dientich);
	} else{
	float chuvi, dientich;
	chuvi = 2*pi*r;
	dientich = pi*pow(r,2);
	printf("%.2f\n",chuvi);
	printf("%5.2f",dientich);
}
	return 0; 
} 
