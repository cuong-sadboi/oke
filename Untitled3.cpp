#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=0; i< t;i++){
		int n; 
		scanf("%d", &n);
		double result = 1.0/n;
		printf("%.15lf\n", result);  
	} 
	return 0; 
} 
