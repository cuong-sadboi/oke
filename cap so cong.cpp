#include<stdio.h>

int main(){
	int n,a[100];
	scanf("%d %d %d",&n,&a[0],&a[1]);
	for(int i=2;i<n;i++){
		a[i]= a[i-1] + (a[1]-a[0]); 
	}
	for(int i =0;i<n;i++){
		printf("%d ", a[i]); 
	} 
	return 0;
}
