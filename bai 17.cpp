#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("Nhap vao: ");
	scanf("%d", &n);
	int m = sqrt(n);  
	if(pow(m,2) == n){
		printf("n la so chinh phuong "); 
	} else {
		printf("n ko la so chinh phuong"); 
	} 
	return 0; 
} 
