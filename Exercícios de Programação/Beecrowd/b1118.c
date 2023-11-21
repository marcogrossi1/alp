#include<stdio.h>

double media(double a, double b){
    return (a+b)/2;
}

int main(){    
    double a,b; 
    int novo_calculo;
    do{
        scanf("%lf", &a);

        if (a>=0 && a<=10){
            do{
                scanf("%lf", &b);

                if (b>=0 && b<=10){
                    printf("media = %.2f\n", media(a,b)); 
                    
                    do{
                        printf("novo calculo (1-sim 2-nao)\n"); 
                        scanf("%d", &novo_calculo);
                    }

                    while(novo_calculo > 2 || novo_calculo <1);

                    if (novo_calculo == 2) break;
                }
                else printf("nota invalida\n");
            }

            while (b<0 || b>10);
        }

        else
            printf("nota invalida\n");
    }

    while(novo_calculo != 2);

    return 0;
}