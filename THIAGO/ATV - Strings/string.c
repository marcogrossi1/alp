#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*-----------------------------------------------------------------*/
//ATIVIDADES (08/08)

//0.0
char* stringMaiuscula(char* string){
    for(int i = 0; i < strlen(string); i++){
        int caractere = string[i];
        
        if(caractere > 96 && caractere < 123){
            caractere -= 32;
            string[i] = caractere;
        }
    }

    return string;
}

//0.1
char* stringMinuscula(char* string){
    for(int i = 0; i < strlen(string); i++){
        int caractere = string[i];
        
        if(caractere > 64 && caractere < 91){
            caractere += 32;
            string[i] = caractere;
        }
    }

    return string;
}

//0.2
int contarAparencias(char* string, char caractere){
    int contador = 0;

    for(int i = 0; i < strlen(string); i++){
        char aux = string[i];

        if(aux == caractere)
            contador++;
    }

    return contador;
}

//0.3
char* apagaCaractere(char* string, char charactere){
    for(int i = 0; i < strlen(string); i++){
        char aux = string[i];

        if(aux == charactere)
            string[i] = ' ';
    }

    return string;
}

//0.4
int* encontrarCaracteresRepetidos(char* string){
    int* tabelaASCII = (int*) calloc(128, sizeof(int));
    char caracter;
    for(int i = 0; i < strlen(string); i++){
        caracter = string[i];
        tabelaASCII[(int) caracter]++;
    }

    return tabelaASCII;
}

//0.5
char* apagarCaracteresRepetidos(char* string, int* tabela){
    for(int i = 0; i < strlen(string); i++)
        if(tabela[(int) string[i]] > 1)
            string[i] = ' ';
    
    return string;
}

/*-----------------------------------------------------------------*/
//ATIVIDADES (21/08)

//1.1
void scanearImprimir(char* string){
    printf("Insira uma string: ");

    printf("%s\n", string);
}

//1.2
int contaString(char* string){
    int i;
    for(i = 0; string[i] != 0 ; i++);

    return i;
}

//1.3
void primeiraLetraA(char* string){
    if(string[0] == 'a' || string[0] == 'A')
        printf("%s\n", string);
}

//1.4
char* quatroLetras(char* string){
    for(int i = 0; i < 4; i++)
        printf("%c", string[i]);
}

//1.5
int contaLetras(char* string){
    int contador = 0;

    for(int i = 0; i < contaString(string); i++)
        if((string[i] > 64 && string[i] < 90) || (string[i] > 96 && string[i] < 123))
            contador++;

    return contador;
}

/*-----------------------------------------------------------------*/