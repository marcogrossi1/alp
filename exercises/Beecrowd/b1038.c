#include <stdio.h>

double valor [] = {4.00 , 4.50, 5.00 , 2.00 , 1.50};

double item_price(int code){
    return valor [code-1];
}

double total(int code, int qntd){
    return item_price(code) * qntd;
}

int main(){    
    int code,qntd;

    scanf("%d %d", &code, &qntd);
    
    printf("Total: R$ %.2f\n", total(code, qntd));

    return 0;
}