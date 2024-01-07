#include <stdio.h>


int main() {
    int n,a,b;
    scanf("%d",&n);
 

    for(int i=0;i<n;i++){
    	scanf("%d%d",&a,&b);
      int num = a+b;
          int count = 0;
    do {
        count++;
        num /= 10;
    } while (num != 0);
    

    
    printf("%d\n", count);
}
    return 0;
}

