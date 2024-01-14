#include<stdio.h>

int main(){

    int hora1, min1, hora2, min2, horaTotal, minTotal;
    scanf("%d %d %d %d",&hora1, &min1, &hora2, &min2);

    horaTotal=hora2-hora1;
    minTotal=min2-min1;

    if(minTotal<0){
        minTotal+=60;
        horaTotal--;
    }

    if(horaTotal<=0 && minTotal<=0){
        horaTotal+=24;
    }

    else if(horaTotal==0 && minTotal>0){
        horaTotal=0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horaTotal,minTotal);
    

    return 0;
}