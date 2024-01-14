#include<stdio.h>

double media(double a, double b){
    return (a+b)/2;
}

int main(){    
    double a,b; 
    do{
        scanf("%lf", &a);

        if (a>=0 && a<=10){
            do{
                scanf("%lf", &b);
                (b>=0 && b<=10) ? printf("media = %.2f\n", media(a,b)) : printf("nota invalida\n");
            }

            while (b<0 || b>10);
        }

        else
            printf("nota invalida\n");
    }

    while(a<0 || a>10);

    return 0;
}