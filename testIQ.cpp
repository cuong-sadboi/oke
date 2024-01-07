/*#include<stdio.h>
#include<math.h>

int Sochinhphuong(int n){
	long long canbachai = sqrt(n);
	return (pow(canbachai,2) == n); 
} 

int Demsochinhphuong(int n){
	long long sum = 0; 
	for (int i = 0; i < n; i++) {
        if (Sochinhphuong(n)) {
            sum++; 
        }
    }
    printf("%d\n", sum);
	return sum; 
}

int main(){
	int t;

	scanf("%d",&t);
    int n;
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		Demsochinhphuong(n);
	}
	return 0;
} */

#include <stdio.h>
#include <math.h>

int main() {
    int t;
    printf("Nhap so luong test case t: ");
    scanf("%d", &t);

    while (t > 0) {
        unsigned long long n;
        printf("Nhap n: ");
        scanf("%llu", &n);

        // Tính s? lu?ng s? chính phuong t? 1 d?n n
        unsigned long long count = 0;
        unsigned long long root = sqrt(n);

        for (unsigned long long i = 1; i <= root; i++) {
            if (i * i <= n) {
                count++;
            }
        }

        printf("So luong so chinh phuong tu 1 den %llu: %llu\n", n, count);

        t--;
    }

    return 0;
}

