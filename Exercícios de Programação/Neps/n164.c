#include<stdio.h>
#include"xadrez.c"

int main(){
    int linha, coluna;
    printf("Insira aqui o número de Linhas do seu tabuleiro e tecle 'Enter':  "); scanf("%d", &linha);
    printf("Insira aqui o número de Colunas do seu tabuleiro e tecle 'Enter': "); scanf("%d", &coluna);
    
    printf("\nAqui está o tabuleiro gerado com essas informações!\n");
    printf("1 = Branco\n");
    printf("0 = Preto\n\n");

    iniciar_tabuleiro(linha, coluna);

    printf("A cor da casa de cordenadas (%d, %d) é %s\n", linha, coluna, reveal_color(linha, coluna));
    printf("Note que essa casa é, também, o último elemento do tabuleiro gerado acima!\n");

    return 0;
}