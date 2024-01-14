#include<stdio.h>

int main(){
    
    int a, b, c, d, e, soma;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    soma = (a%2==0) + (b%2==0) + (c%2==0) + (d%2==0) + (e%2==0);

    printf("%d valores pares\n",soma);

    return 0;
}