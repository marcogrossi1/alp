#include<stdio.h>

int main()
{
    double kml=12, distTotal, gasto;
    int spentTime, velMed;

    scanf("%d %d", &spentTime, &velMed);

    distTotal=spentTime*velMed;

    gasto=distTotal/kml;

    printf("%.3f\n", gasto);

    return 0;
}