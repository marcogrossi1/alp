#include <stdio.h>

int main(){
    int conjunto[10], maiorElemento, segundoMaior;

    scanf ("%d %d", &conjunto[0], &conjunto[1]);
    
    if(conjunto[0] > conjunto[1]){
        conjunto[0] = maiorElemento;
        conjunto[1] = segundoMaior;
    }

    else {
        conjunto[0] = segundoMaior;
        conjunto[1] = maiorElemento;
    }

    for (int i = 2; i < 10; i++) {
        scanf("%d", &conjunto[i]);

        if(conjunto[i] > maiorElemento){
            segundoMaior = maiorElemento;
            maiorElemento = conjunto[i];
        }
    }
}