#include<stdio.h>

int main(){
	long n;
	long arr[100000];
	scanf("%ld",&n);
	for(int i=0;i<n;i++){
		scanf("%ld",&arr[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	int b[n-1];
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			b[i] = arr[i] - arr[j];
		}
	}
	int min = b[0];
	for(int i=0;i<n-1;i++){
		if(b[i] < min){
			min = b[i];
		}
	}
	printf("%d",min);
	return 0;
}
