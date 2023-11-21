#include<stdio.h>

int main(){

    double sal, reajPercent,reaj;
    scanf("%lf",&sal);

    if(sal<=400.00) {reajPercent=0.15;reaj=reajPercent*sal; sal+=(sal*reajPercent);}
        else if(sal<=800.00) {reajPercent=0.12;reaj=reajPercent*sal; sal+=(sal*reajPercent);}
            else if(sal<=1200.00) {reajPercent=0.10;reaj=reajPercent*sal; sal+=(sal*reajPercent);}
                else if(sal<=2000.00) {reajPercent=0.07;reaj=reajPercent*sal; sal+=(sal*reajPercent);}
                    else if(sal>2000.00) {reajPercent=0.04;reaj=reajPercent*sal; sal+=(sal*reajPercent);;}


    printf("Novo salario: %.2f\n",sal);
    printf("Reajuste ganho: %.2f\n",reaj);
    printf("Em percentual: %.f %%\n",reajPercent*100);


    return 0;
}