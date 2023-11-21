#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int arr[], int menor, int alto, int pivo) {
    int i = menor - 1;
    for (int j = menor; j <= alto - 1; j++) {
        if (arr[j] < pivo) {
            i++;
            trocar(&arr[i], &arr[j]);
        }
    }
    trocar(&arr[i + 1], &arr[alto]);
    return i + 1;
}

void quicksort(int arr[], int menor, int alto, int pivo) {
    if (menor < alto) {
        int pi = particionar(arr, menor, alto, pivo);

        quicksort(arr, menor, pi - 1, pivo);
        quicksort(arr, pi + 1, alto, pivo);
    }
}

void imprimirVetor(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int vetor[] = {13, 19, 9, 5, 12, 21, 7, 4, 11, 2, 6, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int pivo = 6;

    printf(sizeof(vetor[0]));

    printf("Vetor original: ");
    imprimirVetor(vetor, tamanho);

    quicksort(vetor, 0, tamanho - 1, pivo);

    printf("Vetor ordenado: ");
    imprimirVetor(vetor, tamanho);

    return 0;
}