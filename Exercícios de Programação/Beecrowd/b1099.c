#include <stdio.h>

int soma_pares(int a, int b){
    int soma = 0, aux;

    if (a>b){
        aux = a; a = b; b = aux;
    }

    for (a ++; a<b; a++)
        soma += (a%2)*a;
    
    return soma;
}

int main(){
    int qntd_testes; scanf("%d", &qntd_testes);

    for(int i = 0, num1, num2; i<qntd_testes; i++){
        scanf("%d %d", &num1, &num2);
        printf("%d\n", soma_pares(num1, num2));
    }
}