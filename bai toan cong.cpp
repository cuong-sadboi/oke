#include<stdio.h>

int main(){
	int a; 
	scanf("%d", &a); 
	for(int i=0;i<a;i++){
		int c,d;
		scanf("%d%d",&c,&d);
		printf("%d\n", c +d); 
	} 
	return 0; 
} 
