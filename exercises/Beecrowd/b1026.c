#include <stdio.h>
#include <stdlib.h>

int pot(int numero, int expoente){
    if(!expoente) return 1;
    
    int novoNumero = numero;
    for(int i = 1; i < expoente; i++)
        novoNumero *= numero;

    return novoNumero;
}

int* decimalBinario(int numeroDecimal){
    int* numeroBinario = calloc(32, sizeof(int)), numeroSave = numeroDecimal;

    for(int i = 0; numeroSave > 0; i++){
        if(numeroSave % 2){
            numeroBinario[i] = 1;
            numeroSave--;
        }

        numeroSave /= 2;
    }

    return numeroBinario;
}

int* somaBinarios(int* numeroBinario1, int* numeroBinario2){
    int* numeroBinarioResultado = numeroBinario1;
    for(int i = 0; i < 32; i++)
        if (numeroBinario1[i] == numeroBinario2[i]) 
            numeroBinarioResultado[i] = 0;
       
       else numeroBinarioResultado[i] = 1;

    return numeroBinarioResultado;
}

int binarioDecimal(int* numeroBinario){
    int numeroDecimal = 0;
    for(int i = 0; i < 32; i++)
        if(numeroBinario[i] == 1) 
            numeroDecimal += pot(2,i);
    
    return numeroDecimal;
}

int main(){
    int valorDec1, valorDec2;
    printf("SOMA MOFIZ\n");
    printf("Insira dois valores: ");
    scanf("%d %d", &valorDec1, &valorDec2);

    while (valorDec1 && valorDec2){
        int *valorBin1 = calloc(32, sizeof(int)), *valorBin2 = calloc(32, sizeof(int));
        
        valorBin1 = decimalBinario(valorDec1);
        valorBin2 = decimalBinario(valorDec2);

        printf("%d em binario eh igual a: ", valorDec1);
        for(int i = 0; i < 32; i++) 
            printf("%d", valorBin1[i]);
    
        printf("\n%d em binario eh igual a: ", valorDec2);
        for(int i = 0; i < 32; i++) 
            printf("%d", valorBin2[i]);

        int* somaBin = somaBinarios(valorBin1, valorBin2);
        int somaDec = binarioDecimal(somaBin);

        printf("\nA soma Mofiz dos numeros %d e %d = %d\n\n", valorDec1, valorDec2, somaDec);
        
        printf("SOMA MOFIZ\n");
        printf("Insira dois valores: ");
        scanf("%d %d", &valorDec1, &valorDec2);
    }
    return 0;
}