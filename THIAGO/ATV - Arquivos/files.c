#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ffunc.h"

int main(){
    //Criando o arquivo.
    FILE *arq;

    //Abrindo o arquivo para leitura.
    arq = fopen("arquivo.txt", "r+");
    testeArquivo(arq);

    //Lendo e printando todos os caracteres do arquivo criado acima e fechando o arquivo.
    lerPrintarArquivo(arq);

    //Printando a quantidade de linhas e vogais de um arquivo.
    printf("O arquivo 'arquivo.txt' possui %d linhas e %d vogais!\n", contaLinhas(arq), contaVogais(arq));

    char caractere;

    printf("Insira o caractere desejado:\t");
    scanf("%c", &caractere);

    int qntdCaracteres = contaCaractere(arq, caractere);
    printf("No arquivo 'arquivo.txt', o caractere %c aparece %d vezes.\n", caractere, qntdCaracteres);
    return 0;
}