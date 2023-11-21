#include<stdio.h>

int main()
{   
    double valor,cem,cinquenta,vinte,dez,cinco,dois,um,cin,vinc,d,cin,u;

    scanf("%lf", &valor);

    cem=valor/500;
    valor=valor-cem
    cinquenta=(valor-cem)/50;
    vinte=()



    printf("NOTAS:\n");
    printf("%.0f nota(s) de R$ 100.00\n",cem);
    printf("%.0f nota(s) de R$ 50.00\n",cinquenta);
    printf("%.0f nota(s) de R$ 20.00\n",vinte);
    printf("%.0f nota(s) de R$ 10.00\n",dez);
    printf("%.0f nota(s) de R$ 5.00\n",cinco);
    printf("%.0f nota(s) de R$ 2.00\n",dois);
    printf("MOEDAS:\n");
    printf("%.0f moeda(s) de R$ 1.00\n",um);
    printf("%.0f moeda(s) de R$ 0.50\n",cin);
    printf("%.0f moeda(s) de R$ 0.25\n",vinc);
    printf("%.0f moeda(s) de R$ 0.10\n",d);
    printf("%.0f moeda(s) de R$ 0.05\n",cin);
    printf("%.0f moeda(s) de R$ 0.01\n",u);
    
    return 0;
}