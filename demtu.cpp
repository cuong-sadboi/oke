#include<stdio.h>

int main(){
	long long n,x;
	long long arr[100000];
	scanf("%lld%lld",&n,&x);
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	double b[100000];
	for(int i=0;i<n;i++){
		b[i] = arr[i] % x;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(b[i] > b[j]){
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
	long dem=1;
	for(int i=0;i<n-1;i++){
		if(b[i] != b[i+1]){
			dem++;
		}
	}
	printf("%d",dem);
	//printf("%d \n",x);
	//for(int i=0;i<n;i++){
	//	printf("%d ",b[i]);
	//}
	return 0;
}
