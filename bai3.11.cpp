#include<stdio.h>
#include<math.h> 

	void Nhap_N(int &n){
		printf("Nhap n: ");
		scanf("%d",&n);
	
	} 
	long long giaithua(int n){
		if(n == 0 || n == 1)
		return 1;
		else
		return n * giaithua(n-1); 
	} 

	long long tinhtong_11(int n){
		long long sum = 0;
		
		for (int  i =1;i <=n; i++){
			long long temp = pow(-1,i+1) * giaithua(i);
			sum += temp;
		
		}  
		return sum; 
	} 

	double tinhtong_10(int n) {
        double sum = 0;
        double temp = 0;
        for (int i = 1; i <= n; i++) {
            temp += pow(i, 2);
            if (i % 2 == 0) {
                sum -= 1 / temp;
            } else {
               sum += 1 / temp;
            }
        }
        return sum;
    }
  
    float tinhtong_12(int n){
    	float sum =1; 
		for(int i=1;i<=n;i++){ 
           double somu = pow(-2, i);
           sum += somu/giaithua(i);
        }  
		return sum;
	}
	
	float tinhtong_13(int n){
		float sum = 0;
		float temp; 
		for(int i =1;i<=n;i++){
			temp += pow(i,2);
			sum += 1/temp; 
		} 
		return sum; 
	} 
	
	float tinhtong_14(int n){
		float sum = 0;
		for(int i =1;i<=n;i++){
			float mauso = 2*i;
			sum += pow(-1,i+1)/mauso; 
		} 
		return sum; 
	} 
	
	float tinhtong_15(int n){
		float sum =0;
		float mauso =0; 
		for(int i=1;i<=n;i++){
			mauso += i;
			sum += pow(-1,i+1)/mauso; 
		} 
		return sum; 
	} 
	
	float tinhtong_16(int n){
    	float sum =1; 
		for(int i=1;i<=n;i++){ 
           double somu = pow(2, i);
           sum += somu/giaithua(i);
        }  
		return sum;
	}
	
	float tinhtong_17(int n){
		float sum = 0;
		for(int i=1;i<=n;i++){
			sum += pow(-1,i+1)/giaithua(i); 
		} 
		return sum; 
	} 
	
    int main() {
		int n; 
		Nhap_N(n);
		printf("%g\n%lld\n%g\n%g\n%g\n%g\n%g\n%g",
		tinhtong_10(n),
		tinhtong_11(n),
		tinhtong_12(n),
		tinhtong_13(n),
		tinhtong_14(n),
		tinhtong_15(n),
		tinhtong_16(n),
		tinhtong_17(n));
		return 0; 
	} 

