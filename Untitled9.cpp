#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n); 
	int k = n/365; 
	printf("%d ", k);
	int t = (n - k*365)/7; 
	printf("%d ", t);
	int h = (n - k*365 - t*7);
	printf("%d", h); 
	return 0; 
} 
