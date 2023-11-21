#include "tad.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Cidade {
    cidade* ant;
    char nome[20];
    char descricao[100];
    cidade* prox;
};

struct Linha {
    cidade* saida;
    cidade* fim;
};

linha* criaLinha(char itinerario[][20], char descricao[][100], int nCidades) {
    linha* linhaR = (linha*)malloc(sizeof(linha));
    cidade* cidadeAux = (cidade*)malloc(sizeof(cidade));

    strcpy(cidadeAux->nome, itinerario[0]);
    strcpy(cidadeAux->descricao, descricao[0]);
    cidadeAux->ant = NULL;
    cidadeAux->prox = NULL;
    linhaR->saida = cidadeAux;
    linhaR->fim = cidadeAux;

    for(int i = 1; i < nCidades; i++) {
        cidade* cidadeNova = (cidade*)malloc(sizeof(cidade));
        cidade* cidadeFim = linhaR->fim;

        cidadeFim->prox = cidadeNova;
        cidadeNova->ant = cidadeFim;

        cidadeNova->prox = NULL;
        linhaR->fim = cidadeNova;
        
        strcpy(cidadeNova->nome, itinerario[i]);
        strcpy(cidadeNova->descricao, descricao[i]);
    }
    return linhaR;
}

void exibeCidade(cidade cid) {
    printf("*");
    puts(cid.nome);
    printf("\n\n");
    puts(cid.descricao);
}