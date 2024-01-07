#include <stdio.h>

int main() {
    int cho, ga;
    for (cho=1;cho<36;cho++){
    for (ga=1;ga<36;ga++){
        if ( (ga+cho==36) && (ga*2+cho*4==100) )
            {
                printf("So ga= %d\n",ga);
                printf("So cho= %d",cho);
            }    
        }
    }
    return 0; 
}
