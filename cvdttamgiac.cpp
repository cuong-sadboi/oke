#include<stdio.h>
#include<math.h> 

int main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	float chuvi = a+b+c; 
	float dientich;
		float p;
	p = chuvi /2; 
	dientich = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%g\n%g",chuvi,dientich);
	return 0; 
} 
