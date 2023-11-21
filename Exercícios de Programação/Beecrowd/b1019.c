#include<stdio.h>

int main()
{
    int entrada, seg, min, hora;
    scanf("%d", &entrada);
    hora = entrada/3600;
    min = (entrada%3600)/60;
    seg = ((entrada%3600)%60);

    printf("%d:%d:%d\n", hora, min, seg);

    return 0;
}