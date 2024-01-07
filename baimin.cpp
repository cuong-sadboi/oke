/*#include <stdio.h>

void calculateSurvivingTeams(int n) {
    int minTeams, maxTeams;
    
    minTeams = n / 4;
    maxTeams = n;
    if(n%4 !=0){
    	minTeams = 1 + (n/4);
	}
    
    printf("%d ", minTeams);
    printf("%d\n", maxTeams);
}

int main() {
   int x;
   scanf("%d",&x);

    for(int i=0;i<x;i++){
         int n;
    scanf("%d",&n);
    calculateSurvivingTeams(n);
    }
    return 0;
}*/

#include <stdio.h>

void printHeart() {
    int i, j;
    
    for (i = 1; i <= 6; i++) {
        for (j = 1; j <= 15; j++) {
            if ((i == 1 && (j == 6 || j == 10 || j == 14)) ||
                (i == 2 && (j == 4 || j == 7 || j == 9 || j == 12)) ||
                (i == 3 && (j == 3 || j == 8 || j == 11 || j == 13)) ||
                (i >= 4 && i <= 5 && (j >= 2 && j <= 14)) ||
                (i == 6 && (j >= 3 && j <= 13))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    printHeart();
    
    return 0;
}


