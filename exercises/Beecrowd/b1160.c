#include<stdio.h>

int main(){

    int popA, popB, num_tests, years;
    double growA, growB;
    
    scanf("%d", &num_tests);
    
    for(int i=0; i<num_tests; i++){
    
        scanf("%d %d %lf %lf",&popA, &popB, &growA, &growB);
        years = 0;

        while(popA<=popB && years<=100){
            popA = popA + popA * growA/100;
            popB = popB + popB * growB/100;
            years++;
        }

        if(years<=100) printf("%d anos.\n", years);
        else printf("Mais de 1 seculo.\n");
    }

    return 0;
}