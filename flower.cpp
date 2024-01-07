#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int max_val;
int prime[max_val+1];
void sieve(int max_val,int prime[max_val + 1]){
	//coi tat ca cac so tu 0 den n la so nguyen to
	for(int i=0;i<=max_val;i++){
		prime[i]=1;
	}
	//gan 0 va 1 la so nguyen to
	prime[0] = prime[1] =0;
	for(int i=2;i<=sqrt(max_val);i++){
		//neu i la so nguyen to
		if(prime[i]){
			//Duyet tat ca cac boi so cua i va cho no khong la so nguyen to
			for(int j = i*i;j<=max_val;j+=i){
				prime[j] = 0; //j khong con la so nguyen to nua
			}
		}
	}
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int max_val = n + m;


    sieve(max_val,prime[max_val+1])

    int lower_row[max_val + 1];
    int upper_row[max_val + 1];
    for (int row = 1; row <= n; ++row) {
        if (prime[row + 1]){
            upper_row[row + 1] = row;
        }
        if (is_prime[row + m]){
            lower_row[row + m] = row;
        }
	}
    for (int col = 1; col <= m; ++col) {
        if (is_prime[col + 1]){	
		    lower_row[col + 1] = 1;
	    }
        if (is_prime[col + n]){
		    upper_row[col + n] = n;
        }
	}

    long long ans = 0;
    for (int num = 1; num <= max_val; ++num) {
        if (!is_prime[num]) continue;
        ans += upper_row[num] - lower_row[num] + 1;
    }
    printf("%lld\n", ans);

    return 0;
}

