#include<stdio.h>

int main(){

    int codig,qntd,qprod,aux=0;
    double preco,total=0;

    scanf("%d",&qprod);
    
    while(aux<qprod){
        scanf("%d %d",&codig, &qntd);

        switch (codig)
        {
        case 1001: preco=1.50; break;
        case 1002: preco=2.50; break;
        case 1003: preco=3.50; break;
        case 1004: preco=4.50; break;
        case 1005: preco=5.50;
        }

        total+=qntd*preco;

        aux++;
    }


    printf("%.2f\n",total);

    return 0;
}