#include<stdio.h>

int main(){
    
    double dist, tempo_total;
    int viajantes;
    
    scanf("%d %lf", &viajantes, &dist);
    tempo_total = dist/(viajantes+2);
    printf("%.2f\n",tempo_total);
    
    return 0;
}