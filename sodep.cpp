//#include<stdio.h>
//
//long a,b;
//int sodep(long n){
//	if(n<10 && n>-10){
//		return 1;
//	}
//	int sau = n %10;
//	while(n){
//		int r = n%10;
//		if(r != sau){
//			return 0;
//		}
//		n/=10;
//	}
//	return 1;
//}
//
//int main(){
//	scanf("%ld%ld",&a,&b);
//	int count=0;
//	for(int i =a;i<=b;i++){
//		if(sodep(i)){
//			count++;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}
//
////#include<stdio.h>
////
////int main(){
////	long a,b;
////	scanf("%lf%lf",&a,&b);
////	printf("%lf %lf",&a,&b);
////	return 0;
////}

#include <stdio.h>
#include <gmp.h>

int isBeautifulNumber(const char *number_str) {
    mpz_t number;
    mpz_init(number);
    
    // Chuy?n chu?i thành s? nguyên l?n
    if (mpz_set_str(number, number_str, 10) == -1) {
        mpz_clear(number);
        return 0; // Không th? chuy?n d?i chu?i thành s? nguyên l?n
    }

    // Ki?m tra s? d?p (gi?ng ch? s? cu?i cùng)
    mpz_t lastDigit;
    mpz_init_set(lastDigit, number);
    mpz_mod_ui(lastDigit, lastDigit, 10);
    
    mpz_t tempNumber;
    mpz_init_set(tempNumber, number);
    while (mpz_cmp_ui(tempNumber, 0) != 0) {
        mpz_t currentDigit;
        mpz_init(currentDigit);
        mpz_mod_ui(currentDigit, tempNumber, 10);
        if (mpz_cmp(currentDigit, lastDigit) != 0) {
            mpz_clear(number);
            mpz_clear(lastDigit);
            mpz_clear(tempNumber);
            mpz_clear(currentDigit);
            return 0; // S? không d?p
        }
        mpz_fdiv_q_ui(tempNumber, tempNumber, 10);
        mpz_clear(currentDigit);
    }
    
    mpz_clear(number);
    mpz_clear(lastDigit);
    mpz_clear(tempNumber);
    
    return 1; // S? d?p
}

int countBeautifulNumbers(const char *a_str, const char *b_str) {
    mpz_t a, b;
    mpz_init(a);
    mpz_init(b);
    
    // Chuy?n chu?i thành s? nguyên l?n
    if (mpz_set_str(a, a_str, 10) == -1 || mpz_set_str(b, b_str, 10) == -1) {
        mpz_clear(a);
        mpz_clear(b);
        return -1; // Không th? chuy?n d?i chu?i thành s? nguyên l?n
    }

    int count = 0;
    
    // Duy?t qua t?ng s? trong kho?ng [a, b]
    mpz_t current;
    mpz_init(current);
    for (mpz_set(current, a); mpz_cmp(current, b) <= 0; mpz_add_ui(current, current, 1)) {
        if (isBeautifulNumber(mpz_get_str(NULL, 10, current))) {
            count++;
        }
    }
    
    mpz_clear(a);
    mpz_clear(b);
    mpz_clear(current);
    
    return count;
}

int main() {
    char a_str[1000], b_str[1000];
    printf("Nh?p do?n [a, b]: ");
    scanf("%s %s", a_str, b_str);

    int beautifulCount = countBeautifulNumbers(a_str, b_str);
    if (beautifulCount == -1) {
        printf("Nh?p sai d?u vào. a và b ph?i là s? nguyên.\n");
    } else {
        printf("S? lu?ng s? d?p trong do?n [%s, %s] là %d.\n", a_str, b_str, beautifulCount);
    }

    return 0;
}

