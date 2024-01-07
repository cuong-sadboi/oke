
#include <stdio.h>
#include <math.h>

#define MOD 1000000007
long suma,sumb;
double a,b;
	

int main(){

	scanf("%lf%lf",&a,&b);
	long long x;
    if(a> (int)a){
    	x = (int)a+1;
	} else if(a == (int)a){
		x = a;
	}
	long long y = (long long)floor(b);
	for(long long i=0;i<x;i++){
        suma += pow(i,2);
    } 
    for(long long i=0;i<=y;i++){
        sumb += pow(i,2);
    } 
	long long sumxue = (sumb - suma);
    if(sumxue<MOD){
    	printf("%lld",sumxue);
	} else if(sumxue == MOD){
		printf("0");
	}else{
		printf("%lld",sumxue-MOD);
	} 

	return 0;
} 

//#include <stdio.h>
//
//#define MOD 1000000007
//
//long long mod_pow(long long base, long long exp, long long mod) {
//    long long result = 1;
//    base = base % mod;
//    while (exp > 0) {
//        if (exp % 2 == 1) {
//            result = (result * base) % mod;
//        }
//        base = (base * base) % mod;
//        exp = exp / 2;
//    }
//    return result;
//}
//
//int main() {
//    double a, b;
//    scanf("%lf %lf", &a, &b);
//
//    long long int_a = (long long)a;
//    long long int_b = (long long)b;
//
//    long long result = 0;
//
//    for (long long i = int_a; i <= int_b; i++) {
//        result = (result + (i * i) % MOD) % MOD;
//    }
//
//    printf("%lld\n", result);
//
//    return 0;
//}

