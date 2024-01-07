#include<stdio.h>
int main()
{
    int a;
    do
    {
        scanf("%d",&a);
    }while(a<0);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }        
        printf("\n");
    }

}
