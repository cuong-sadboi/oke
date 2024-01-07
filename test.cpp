#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a[n];
    for(int i=0;i<n;i++){
        a[i] =0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            a[i] = arr[i];
        }
    }
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i] !=0){
            dem++;
        }
    }
    if(dem==0){
        printf("-1");
        return 0;
    }
    int min=k;
    int phong =0;
    for(int i=1;i<n;i++){
        if(a[i] != 0 && a[i] <= min){
            min = a[i];
            phong = i+1;
        }
    }
    printf("%d",(abs(phong-m) * 10));
    return 0;
}

