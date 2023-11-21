#include<stdio.h>

int main()
{
    int num,hours;
    double salH, salT;
    scanf("%d %d %lf", &num, &hours, &salH);
    salT = hours*salH;
   
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", salT);
    return 0;
}