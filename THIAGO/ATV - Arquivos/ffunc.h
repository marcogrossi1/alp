void testeArquivo (FILE *arquivo){
    if(arquivo == NULL){
        perror("Erro na crianção do arquivo\n");
        exit(1);
    }
    
    else printf("O arquivo foi aberto com sucesso!\n");
}

void escreveArquivo (FILE* arquivo){
    char c, caractereDelimitador;
    printf("\nESCREVENDO CARACTERES NO ARQUIVO!\n");
    
    printf("1 - Insira o caractere delimitador: \t"); 
    scanf("%c", &caractereDelimitador);

    do {
        printf("Insira um caractere (%c para sair!):\t", caractereDelimitador); 
        fflush(stdin);
        scanf("%c", &c);

        if(c == caractereDelimitador) break;

        fputc(c, arquivo);
    }

    while (c != caractereDelimitador);
}

void lerPrintarArquivo (FILE* arquivo){
    int ch;

    while((ch = fgetc(arquivo)) != EOF)
        putchar(ch);

    putchar('\n');
}

int contaLinhas (FILE *arquivo){
    int caractere, existe_linhas = 0;
    int quant_linhas = 1;
    
    if(arquivo == NULL) return 0;
    
    while((caractere = fgetc(arquivo)) != EOF)
      if(caractere == '\n')
        quant_linhas++;             
    
    quant_linhas++;
    
    return quant_linhas;
}

char* tudoMinusculo (FILE* arquivo){
    char *arquivoMinusculo = calloc(100, sizeof(char));
    int i = 0, caractere;

    while((arquivoMinusculo[i] = fgetc(arquivo)) != EOF){
        if(arquivoMinusculo[i] > 64 && arquivoMinusculo[i] < 91)
            arquivoMinusculo[i] += 32;

        i++;
    }

    return arquivoMinusculo;
}

int contaVogais (FILE* arquivo){
    int contador = 0;
    char *stringMinusculo = tudoMinusculo(arquivo);

    for(int i = 0; i < strlen(stringMinusculo); i++){
        switch (stringMinusculo[i]){
            case 'a': contador++; break;

            case 'e': contador++; break;

            case 'i': contador++; break;

            case 'o': contador++; break;

            case 'u': contador++; break;
        }
    }

    return contador;
}

int contaCaractere (FILE* arquivo, char caractere){
    int contador = 0;
    char c;

    while((c = fgetc(arquivo)) != EOF)
        if(c == caractere)
            contador++;
    
    return contador;
}