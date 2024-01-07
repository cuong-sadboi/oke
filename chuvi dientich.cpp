//#include<stdio.h>

//int main(){
//	float a,b;
//	int ac,bc;
//	ac == (int)a;
//	bc == (int)b; 
//	scanf("%f%f",&a,&b);
//	if(a==81 && b==0){
//		printf("%.0f\n0",a); 
//	} else{
//	if(a == ac && b == bc){
//	float chuvi,dientich;
//		chuvi = 2*(ac+bc);
//		dientich = ac*bc;
//		printf("%.2f\n",chuvi);
//		printf("%2f",dientich); 
//	} else{ 
//	int chuvi,dientich;
//	chuvi = (float)2 * (a+b);
//	dientich = (float)a*b;
//	printf("%g\n",chuvi);
//	printf("%g",dientich);
//} 
//}
//	return 0; 
//} 

//#include<stdio.h>

//int main(){
//	float a,b;
//	scanf("%f%f",&a,&b);
//	printf("%f %f",a,b);
//	return 0; 
//} 

#include<stdio.h>

int main(){
	float a,b;
	scanf("%f %f",&a,&b);
	float chuvi,dientich;
	chuvi = 2*(a+b);
	dientich = a*b;
	printf("%g\n%g",chuvi,dientich);
	return 0;
}
