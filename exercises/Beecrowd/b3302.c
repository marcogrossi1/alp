#include<stdio.h>

void resposta(int n){
    for (int resposta, i = 1; i<=n; i++){
        scanf("%d", &resposta);
        printf("resposta %d: %d\n", i, resposta);
    }
}

int main(){
    int n_questoes;
    scanf("%d", &n_questoes);

    resposta(n_questoes);

    return 0;
}