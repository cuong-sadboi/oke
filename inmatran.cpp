#include<stdio.h>

void hang(int a) { 
for (int c=1;c!=a+1;c++) { 
printf("* "); 
}
} 
int main() {
 int a,b; 
 scanf("%d %d",&a,&b);
  for (int c=1;c!=a+1;c++) {
   hang(b); printf("\n"); 
   }
    return 0;
	 }
