#include<stdio.h>
#include<math.h>

long long giaithua(int n){
		if(n == 0 || n == 1)
		return 1;
		else
		return n * giaithua(n-1); 
	} 

	long long tinhtong_11(int n){
		long long sum = 0;
		
		for (int  i =1;i <=n; i++){
			long long term = pow(-1,i+1) * giaithua(i);
			sum += term;
		}  
		printf("%lld",sum);
		return sum; 
	} 
int main(){
	int n;
	scanf("%d",&n);
	tinhtong_11(n);
}
