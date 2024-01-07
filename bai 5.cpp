#include<stdio.h>
#include<math.h> 

int main(){
	int r;
	printf("Nhap vao ban kinh:");
	scanf("%d",&r);
	float s,v;
	s = 4 * 3.14 * pow(r,2);
	v = (4/3)*3.14* pow(r,3);
	printf("dien tich: %.2f\n",s);
	printf("the tich: %.2f", v); 
	return 0;
 
} 
