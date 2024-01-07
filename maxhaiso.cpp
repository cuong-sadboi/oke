#include <stdio.h>

int main(){
 float a, b, c, d, max; 
 scanf("%f%f%f%f", &a, &b, &c,&d);
  max=a;
   if(max<b) max=b;
    if(max<c) max=c;
	 if(max<d) max=d;
	  printf("%g", max);
return 0;
 }
