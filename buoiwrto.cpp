//#include<stdio.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int buoi[10000];
//	for(int i=0;i<n;i++){
//		scanf("%d",&buoi[i]);
//	}
//	int m;
//	scanf("%d",&m);
//	int giai[100];
//	for(int i=0;i<m;i++){
//		scanf("%d",&giai[i]);
//	}
//	int sum=buoi[0];
//	int arr[100];
//	arr[0]=buoi[0];
//	for(int j=1;j<n;j++){
//		sum += buoi[j];
//		arr[j] = sum;
//    }
//    if(giai[0]<arr[0]){
//        		printf("1 ");
//			}
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//        	
//			if(giai[j] > arr[i] && giai[j]<=arr[i+1]){
//				printf("%d ",i+1);
//			}
//		} 	  
//    } 
//	return 0;
//}
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int buoi[10000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &buoi[i]);
    }

    int m;
    scanf("%d", &m);

    int giai[100];
    for (int i = 0; i < m; i++) {
        scanf("%d", &giai[i]);
    }

    int sum = buoi[0];
    int arr[10000];
    arr[0] = buoi[0];

    for (int j = 1; j < n; j++) {
        sum += buoi[j];
        arr[j] = sum;
    }

    for (int i = 0; i < m; i++) {
        if (giai[i] <= arr[0]) {
            printf("1 ");
        } else {
            for (int j = 1; j < n; j++) {
                if (giai[i] > arr[j - 1] && giai[i] <= arr[j]) {
                    printf("%d ", j + 1);
                    break;
                }
            }
        }
    }

    return 0;
}

