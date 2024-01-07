 #include <stdio.h>

void sinhton(int n) {
    int minTeams, maxTeams;
    maxTeams = 25;
    minTeams = n / 4;
    if(n<25){
    	maxTeams =n;
	}
    if(n%4 !=0){
    	minTeams = 1 + (n/4);
	}
    
    printf("%d %d\n", minTeams,maxTeams);

}

int main() {
   int x;
   scanf("%d",&x);

    for(int i=0;i<x;i++){
         int n;
    scanf("%d",&n);
    
    sinhton(n);
    }
    return 0;
} 

