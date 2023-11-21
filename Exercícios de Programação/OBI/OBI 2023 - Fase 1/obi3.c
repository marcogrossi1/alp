//estoque
#include<stdio.h>

int main(){
    int n_tipos, n_tamanhos, estoque[501][501];
    
    scanf("%d %d", &n_tipos, &n_tamanhos);

    for(int tipo = 1; tipo < n_tipos+1; tipo++)
        for(int tamanho = 1; tamanho < n_tamanhos+1; tamanho++)
            scanf("%d", &estoque[tipo][tamanho]);

    int n_pedidos, tipo, tamanho, vendas = 0;
    scanf("%d", &n_pedidos);

    for(int i = 0; i<n_pedidos; i++){
        scanf("%d %d", &tipo, &tamanho);
        
        if(estoque[tipo][tamanho] > 0){
            estoque[tipo][tamanho] --; vendas++;
        }
    }

    printf("%d\n", vendas);

    return 0;
}