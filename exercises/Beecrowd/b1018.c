#include<stdio.h>

int main()
{
    int entrada,moeda,dois,cinco,dez,vinte,cinquenta,cem;
    scanf("%d", &entrada);
   
    cem=entrada/100;
    cinquenta = entrada%100/50;
    vinte=entrada%100%50/20;
    dez=entrada%100%50%20/10;
    cinco=entrada%100%50%20%10/5;
    dois=entrada%100%50%20%10%5/2;
    moeda=entrada%100%50%20%10%5%2;

    printf("%d\n",entrada);
    printf("%d nota(s) de R$ 100,00\n",entrada/100);
    printf("%d nota(s) de R$ 50,00\n",cinquenta);
    printf("%d nota(s) de R$ 20,00\n",vinte);
    printf("%d nota(s) de R$ 10,00\n",dez);
    printf("%d nota(s) de R$ 5,00\n",cinco);
    printf("%d nota(s) de R$ 2,00\n",dois);
    printf("%d nota(s) de R$ 1,00\n",moeda);
    
    return 0;
}