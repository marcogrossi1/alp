#include<stdio.h>

int main(){

    int hora1, hora2, total;
    scanf("%d %d",&hora1, &hora2);

    if(hora2>hora1)
        total=hora2-hora1;

    else if(hora2<=hora1)
        total=(hora2+24)-hora1;

    printf("O JOGO DUROU %d HORA(S)\n",total);

    return 0;
}