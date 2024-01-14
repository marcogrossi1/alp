#include<stdio.h>

int main(){ 
    double total=0.00;
    int casos, qntd_casos, coelho=0,sapo=0,rato=0;
    char animal;
    scanf("%d",&casos);

   for(int i=0; i<casos; i++){
        scanf("%d %c", &qntd_casos, &animal);
        if (animal=='C')(coelho+=qntd_casos);
        else if (animal=='R')(rato+=qntd_casos);
        else (sapo+=qntd_casos);

    }

    total = coelho + sapo + rato;

    printf("Total: %.f cobaias\n",total);
    printf("Total de coelhos: %d\n",coelho);
    printf("Total de ratos: %d\n",rato);
    printf("Total de sapos: %d\n",sapo);
    printf("Percentual de coelhos: %.2f %%\n",100*coelho/total);
    printf("Percentual de ratos: %.2f %%\n",100*rato/total);
    printf("Percentual de sapos: %.2f %%\n",100*sapo/total);

    return 0;
}