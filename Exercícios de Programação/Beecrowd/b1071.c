#include<stdio.h>

void mod(int a, int b){
    if (a>b){
        int aux; aux = a; a = b; b = aux;
    }
}

int soma_impares(int a, int b){
    int soma = 0;

    mod(a,b);

    for (b++;a>b;b++){
        if(b % 2) 
            (soma+=b);
    }

    return soma;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", soma_impares(a,b));

    return 0;
}