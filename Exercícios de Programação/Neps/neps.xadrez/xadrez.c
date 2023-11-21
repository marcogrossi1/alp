#include<stdio.h>

void iniciar_tabuleiro(int linha_max, int coluna_max){
    int vetor[linha_max], i = 0;
    
    for(int n = 1; n<coluna_max+1; n++){
        if(n%2){
            for(i=1; i<=linha_max; i++){
                if(i%2)
                    vetor[i] = 1;
                else 
                    vetor[i] = 0;

                printf("%d   ", vetor[i]);
            }
        }

        else
            for(i=0; i<linha_max; i++){
                if(i%2)
                    vetor[i] = 1;
                else 
                    vetor[i] = 0;

                printf("%d   ", vetor[i]);
            }

        printf("\n\n");
    }
}

int square_color(int linha, int coluna){
    if(linha%2 && coluna%2)
        return 1;
    else if(linha%2)
        return 0;
    else if(coluna%2)
        return 0;
    else
        return 1;
}

char* reveal_color(int linha, int coluna){
    if (square_color(linha, coluna))
        return "Branco.";
    else
        return "Preto.";
}
