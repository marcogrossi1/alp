#include "tad.h"
#include <stdio.h>
#include <string.h>

struct Linha {
    cidade* saida;
    cidade* fim;
};

struct Cidade {
    cidade* ant;
    char nome[20];
    char descricao[100];
    cidade* prox;
};

int main() {
    // REGISTRO
    char option;
    char itinerarioImb[4][20] = { "Florianopolis", "Palhoca", "Paulo Lopes", "Imbituba" };
    char descricaoImb[4][100] = { "E a capital do estado de Santa Catarina e fica no sul do Brasil", "Na regiao metropolitana de Floripa, Palhoca conta com lindas praias", "Paulo Lopes conta com lindas praias e cachoeiras", "Imbituba e uma linda cidade, repleta de ilhas e montanhas" };
    char itinerarioSan[3][20] = { "Florianópolis", "Capoeiras", "Santana" };
    char descricaoSan[3][100] = { "E a capital do estado de Santa Catarina e fica no sul do Brasil", "Capoeiras e uma cidade linda e rural, cheia de cultura e vida", "Santana e uma maravilhosa cidade, repleta de florestas e campos" };

    linha* linhaImb;
    linha* LinhaSan;
    linha* linhaEscolhida;
    linhaImb = criaLinha(itinerarioImb, descricaoImb, 4);
    LinhaSan = criaLinha(itinerarioSan, descricaoSan, 3);

    // MENU
    printf("Selecione a sua linha \n 1-Imbituna \n 2-Santana \n 0-Sair\n");
    scanf(" %c", &option);
    printf("Selecione >a< para ir para a esquerda , >d< para a esquerda e 0 para sair\n");
    switch(option) {
    case '1':
        linhaEscolhida = linhaImb;
    case '2':
        linhaEscolhida = LinhaSan;
        break;
    case '0':
        break;
    default:
        printf("Essa linha não existe\n");
        break;
    }

    printf("Linha escolhida:");
    puts(linhaEscolhida->fim->nome);
    cidade* cidadeAtual = linhaEscolhida->saida;
    do {
        scanf(" %c", &option);
        switch(option) {
        case 'd':
            if(!cidadeAtual->prox) {
                printf("esta e a ultima cidade\n");
                break;
            }
            cidadeAtual = cidadeAtual->prox;
            exibeCidade(*cidadeAtual);
            break;
        case 'a':
            if(!cidadeAtual->ant) {
                printf("esta e a primeira cidade\n");
                break;
            }
            cidadeAtual = cidadeAtual->ant;
            exibeCidade(*cidadeAtual);
            break;
        case '0':
            break;
        default:
            printf("As unicas teclas permitidas são a,d e 0\n");
            break;
        } 
    } while(option != '0');
    return 0;
}