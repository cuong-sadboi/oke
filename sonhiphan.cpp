#include <stdio.h>

void printBinary(int n) {
	
	if (n == 0 || n == 1) {
        printf("%d", n);
        return;
    }
	
    int binary[10];
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }


    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}


int main() {
    int n;
    scanf("%d", &n);

    printBinary(n);

    return 0;
}

//#include<stdio.h>

//int main(){
//	int n,x;
//	scanf("%d %d",&x,&n);
//	printf("%d %d",x,n);
//	return 0;
//}
