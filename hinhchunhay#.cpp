/* #include<stdio.h>

void printRectangle(int a, int b) {
    int i, j;
    
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= b; j++) {
            if (i == a ) {
                printf("#");
            } 
        }
        printf("\n");
    }
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printRectangle(a, b);
	return 0;
} */

#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("*\n");
		}
	}
	return 0;
}
