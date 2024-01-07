#include<stdio.h>
#include<math.h>

int main(){
	int a;
	printf("nhap a:");
	scanf("%d", &a); 
	int bp = pow(a,2);
	int lp = pow(a,3); 
	printf("binh phuong cua a: %d\n", bp);
	printf("lap phuong cua a: %d", lp);
	return 0; 
} 
