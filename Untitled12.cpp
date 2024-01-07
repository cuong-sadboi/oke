#include<stdio.h>

int main(){
	int r; 
	printf("Nhap vao ban kinh r : "); 
	scanf("%d", &r);
	float dt , cv;
	dt = r * 3.14 * 3.14;
	cv = 2 * r * 3.14; 
	 
	printf("Chu vi duong tron la: %.2f\n", cv);
	printf("Dien tich hinh tron la: %.2f", dt);
	return 0; 
} 
