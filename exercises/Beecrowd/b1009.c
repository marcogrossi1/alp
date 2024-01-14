#include<stdio.h>

int main()
{
    char nome[20];
    double salary, sells, totalsalary;

    scanf("%s %lf %lf", &nome, &salary, &sells);

    totalsalary = salary + (sells*3/20);

    printf("TOTAL = R$ %.2f\n", totalsalary);
    return 0;
}