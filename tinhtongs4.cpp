#include<stdio.h>
#include<math.h>

	long long giaithua(int n){
		if(n == 0 || n == 1)
		return 1;
		else
		return n * giaithua(n-1); 
	} 
float tinhtong_12(int n){
    float sum =1; 
	for(int i=1;i<=n;i++){ 
        double somu = pow(-2, i);
        sum += somu/giaithua(i);
    }  
    printf("%g",sum); 
	return sum;
}
	

	
int main(){
	int n;
	scanf("%d",&n);
	tinhtong_12(n);
	return 0; 
} 
