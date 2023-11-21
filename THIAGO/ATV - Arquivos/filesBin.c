#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ffunc.h"

typedef struct {
    unsigned long int telefone;
    char* nome;
} Usuario;

void cadastroUsuario () {
    Usuario user;
    FILE* cadastro = fopen("cadastro.txt", "w+");
    
    testeArquivo(cadastro);

    do{
        printf("Insira o telefone do cliente: (0 para sair)");
        scanf("%lu", &user.telefone);

        if(!user.telefone) exit(1);

        getchar();

        printf("Insira o nome do cliente: ");
        scanf("%s", &user.nome);

        fwrite(&user, sizeof(user), 1, cadastro);
    }

    while(user.telefone);
}

void leituraBinaria (FILE* arquivo) {
    typedef struct {
        int dia, mes, ano;
    } Data;

    scanf("%d/%d/%d", &Data.dia, &Data.mes, &Data.ano);
    
}

int main(){
    int escolha;

    printf("========================================\n");
    printf("0 - Sair\n");
    printf("1 - Cadastrar novo usuário\n");
    printf("========================================\n");
    
    scanf("%d", &escolha);

    if(!escolha) exit;

    else cadastroUsuario();

    return 0;
}