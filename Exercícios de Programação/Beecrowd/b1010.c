#include<stdio.h>

int main()
{
    int nUnit1,nUnit2, c1, c2;
    double p1,p2,valor;

    scanf("%d %d %lf", &c2, &nUnit1, &p1);
    scanf("%d %d %lf", &c1, &nUnit2, &p2);

    valor = nUnit1*p1 + nUnit2*p2;

    printf("VALOR A PAGAR: R$ %.2f\n",valor);
    
    return 0;
}