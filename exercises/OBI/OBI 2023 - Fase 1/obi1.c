//subsequência

#include<stdio.h>

char compara(int a[], int b[], int nA, int nB){
    int contador = 0, j = 0, salvar = 0;

    if(nA == nB){
        for(int i = 0; i<nA; i++)
            if(b[i] != a[i])
                return 'N';
        return 'S';
    }
    
    for(int i = 0; i < nB; i++)
        for(j = salvar; j < nA; j++)
            if(b[i] == a[j]){
                contador++;
                salvar = j+1;
                break;
            }
    
    if(contador == nB)
        return 'S';
    
    return 'N';
}

int main(){
    int n_elementosA, n_elementosB, a[100001], b[100000];
    scanf("%d %d", &n_elementosA, &n_elementosB);

    for(int i = 0; i<n_elementosA; i++)
        scanf("%d", &a[i]);
    
    for(int i = 0; i<n_elementosB; i++)
        scanf("%d", &b[i]);
    
    printf("%c\n", compara(a, b, n_elementosA, n_elementosB));

    return 0;
}