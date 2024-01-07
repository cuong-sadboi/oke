#include<stdio.h>

int main(){
	long n;
	scanf("%lld",&n);
	long arr[n];
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	long max = arr[0];
	long trongtui =0;
	for(int i=0;i<n;i++){
		trongtui += arr[i];
		if(arr[i] > max){
			max = arr[i];
		}
	}
	long them = max*n - trongtui;
	printf("%lld",them);
	return 0;
}
