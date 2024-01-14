#include <stdio.h>

int comprimentoString (char* string) {
    int i;
    for(i = 0; string[i] != EOF; ++i);
    return i;
}

int contaCaracteres (char* string) {
    int contadorCaracteres = 0;

    for (int i = 0; i < comprimentoString(string); ++i)
        if(string[i] != 32)
            ++contadorCaracteres;
        
    return contadorCaracteres;
}

char* primeiraPassada (char* mensagem) {
    for(int i = 0; i < comprimentoString(mensagem); ++i)
        if(mensagem[i] > 64 && mensagem[i] < 91 || mensagem[i] > 96 && mensagem[i] < 123)
            mensagem[i] += 3;

    return mensagem;
}

char* segundaPassada (char* mensagem) {
    char* novaString = mensagem;

    for(int i = 0, j = comprimentoString(mensagem) - 1; i < comprimentoString(mensagem); ++i)
        novaString[i] = mensagem[j];
    
    return novaString;
}

char* terceiraPassada (char* mensagem) {
    int numCaracteres = contaCaracteres(mensagem);

    for(int i = numCaracteres/2; i < comprimentoString(mensagem); ++i)
        if(mensagem[i] != 32)
            --mensagem[i];

    return mensagem;
}

int main(){
    int numCasos; scanf("%d", &numCasos);

    for(int i = 0; i < numCasos; ++i){
        char* mensagem;
        gets(mensagem);

        char* p1 = primeiraPassada(mensagem), *p2 = segundaPassada(p1), *p3 = terceiraPassada(p2);
        
        printf("%s\n", mensagem);
        printf("Mensagem apos a primeira passada: %s\n", p1);
        printf("Mensagem apos a segunda passada: %s\n", p2);
        printf("Mensagem apos a terceira passada: %s\n", p3);
    }

    return 0;
}