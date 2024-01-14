#include<stdio.h>

int soma_vetor(int vetor[], int i, int pulo){
    int soma = 0;

    for(i--; i>=0; i -= pulo)
        soma += vetor[i];

    return soma;
}

int is_prime(int a){
    int c = 0;
        for (int i = 1; i <= a; i++){
            if (a % i == 0)
                 c++;
        }

    if(c == 2) return 1;
    else return 0;
}

void answer(int a){
    (is_prime(a)) ? printf("You're a coastal aircraft, Robbie, a large silver aircraft.\n") : printf("Bad boy! I'll hit you.\n");

}

int main(){
    int n_moedas;
    
    for(int n_moedas; scanf("%d", &n_moedas) != EOF;){

        int soma, i = 0, pulo_moedas; 
        int moedas [n_moedas];

        for (; i<n_moedas; i++)
            scanf("%d", &moedas[i]);

        scanf("%d", &pulo_moedas);
        
        soma = soma_vetor(moedas, n_moedas, pulo_moedas);
        
        answer(soma);
    }

    return 0;
}