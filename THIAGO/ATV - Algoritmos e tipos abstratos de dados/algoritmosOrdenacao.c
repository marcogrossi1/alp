#include <stdio.h>
#include <stdlib.h>

void selecao (int m, int x[], int* contaComparacoes, int* contaTrocas);
void insercao_direta (int *v, int n, int* contaComparacoes, int* contaTrocas);
void quick_sort(int *a, int left, int right);

int main() {
    int vetor1[] = {2, 4, 6, 8, 10 ,12},
    vetor2[] = {11, 9, 7, 5, 3, 1},
    vetor3[] = {5, 7, 2, 8, 1, 6},
    vetor4[] = {2, 4, 6, 8, 10, 12 ,11, 9, 7, 5, 3, 1},
    vetor5[] = {2, 4, 6, 8, 10, 12 ,1 ,3 ,5, 7 ,9 ,11},
    vetor6[] = {8, 9, 7, 9, 3, 2, 3, 8, 4, 6},
    vetor7[] = {89, 79, 32, 38, 46, 26, 43, 38, 32, 79};
    int contaComparacoes1, contaTrocas1, contaComparacoes2, contaTrocas2, contaComparacoes3, contaTrocas3, contaComparacoes4, contaTrocas4, contaComparacoes5, contaTrocas5, contaComparacoes6, contaTrocas6, contaComparacoes7, contaTrocas7;
    contaComparacoes1 = contaTrocas1 = contaComparacoes2 = contaTrocas2 = contaComparacoes3 = contaTrocas3 = contaComparacoes4 = contaTrocas4 = contaComparacoes5 = contaTrocas5 = contaComparacoes6 = contaTrocas6 = contaComparacoes7 = contaTrocas7 = 0;

    selecao(6, vetor1, &contaComparacoes1, &contaTrocas1);
    selecao(6, vetor2, &contaComparacoes2, &contaTrocas2);
    selecao(6, vetor3, &contaComparacoes3, &contaTrocas3);
    selecao(12, vetor4, &contaComparacoes4, &contaTrocas4);
    selecao(12, vetor5, &contaComparacoes5, &contaTrocas5);
    selecao(10, vetor6, &contaComparacoes6, &contaTrocas6);
    selecao(12, vetor7, &contaComparacoes7, &contaTrocas7);

    insercao_direta(6, vetor1, &contaComparacoes1, &contaTrocas1);
    insercao_direta(6, vetor2, &contaComparacoes2, &contaTrocas2);
    insercao_direta(6, vetor3, &contaComparacoes3, &contaTrocas3);
    insercao_direta(12, vetor4, &contaComparacoes4, &contaTrocas4);
    insercao_direta(12, vetor5, &contaComparacoes5, &contaTrocas5);
    insercao_direta(10, vetor6, &contaComparacoes6, &contaTrocas6);
    insercao_direta(12, vetor7, &contaComparacoes7, &contaTrocas7);

    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("Exercicio a:\n");
    printf("N comparacoes:\t N trocas\n");
    printf("Selecao %d\t %d\n", contaComparacoes1);
    printf("Insercao %d\t %d\n", );
    printf("QuickSort %d\t %d\n");
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    for(int i = 0; i < )
}

void selecao (int m, int x[], int* contaComparacoes, int* contaTrocas) {
    int aux, j, i, maior;

    for(i = 0; i < m-1; i++){
        maior=0;
        
        for (j = 0; j< m-i; j++){
            *contaComparacoes++;
            if (x[j] > x[maior])
                maior=j;
                *contaTrocas++;
        }
        
        aux = x[m - i - 1];
        x[m - i - 1] = x[maior];
        x[maior] = aux;
    }
}

void insercao_direta (int *v, int n, int* contaComparacoes, int* contaTrocas) {
    int k_ins, k, elemento;
    for (k = 1; k < n; k++){
        k_ins = k - 1;
        
        elemento = v[k];
        elemento = v[k];
        
        while (k_ins >= 0 && v[k_ins] > elemento)
            v[k_ins+1] = v[k_ins--];
        
        v[k_ins+1]=elemento;
    }
}

void quick_sort(int *a, int left, int right) {
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
}