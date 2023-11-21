#include <stdio.h>

int main(){

    int dia1, dia2, hora1, hora2, min1, min2, seg1, seg2, diaTotal, horaTotal, minTotal, segTotal;

    getchar(); getchar(); getchar(); getchar();
    scanf("%d", &dia1);
    getchar(); getchar(); getchar();
    scanf("%d",&hora1);
    getchar(); getchar(); getchar();
    scanf("%d",&min1);
    getchar(); getchar(); getchar();
    scanf("%d",&seg1);

    getchar(); getchar(); getchar(); getchar();
    scanf("%d", &dia2);
    getchar(); getchar(); getchar();
    scanf("%d",&hora2);
    getchar(); getchar(); getchar();
    scanf("%d",&min2);
    getchar(); getchar(); getchar();
    scanf("%d",&seg2);

    diaTotal=dia2-dia1;
    horaTotal=hora2-hora1;
    minTotal=min2-min1;
    segTotal=seg2-seg1;


    if(segTotal<0){
        segTotal+=60;
        minTotal-=1;
    }

    if(minTotal<0){
        minTotal+=60;
        horaTotal-=1;
    }

    if(horaTotal<0){
        horaTotal+=24;
        diaTotal-=1;   
    }

    printf("%d dia(s)\n", diaTotal);
    printf("%d hora(s)\n", horaTotal);
    printf("%d minuto(s)\n", minTotal);
    printf("%d segundo(s)\n", segTotal);

    return 0;
}