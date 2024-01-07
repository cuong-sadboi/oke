#include <stdio.h>

int main()
{
   int n, sum = 0;

   printf("Nhap cac so nguyen (nhap 0 de ket thuc):\n");

   while (1) 
   {
       scanf("%d", &n);
       if (n == 0)
           break;
       sum += n; 
   }

   printf("Tong cua cac so vua nhap la %d\n", sum);

   return 0;
}
 
