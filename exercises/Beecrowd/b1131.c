#include<stdio.h>

int vencedor(int a, int b){
    return (a>b)*1 + (a<b)*2 + (a==b)*0;
}

int main(){
    int inter, gremio, vitoria_inter = 0, vitoria_gremio = 0, empate = 0, novo_grenal;

    do{
        scanf("%d %d", &inter, &gremio);
        
        switch (vencedor(inter, gremio)){
            case 1: vitoria_inter++; break;
            case 2: vitoria_gremio++; break;
            case 0: empate++;
        }

        do{
            printf("Novo grenal (1-sim 2-nao)\n"); scanf("%d", &novo_grenal);
        }

        while(novo_grenal>2 || novo_grenal<1);

        if (novo_grenal == 2) break;
    }

    while(novo_grenal == 1);

    printf("%d grenais\n", vitoria_inter + vitoria_gremio + empate);
    printf("Inter:%d\n", vitoria_inter);
    printf("Gremio:%d\n", vitoria_gremio);
    printf("Empates:%d\n", empate);
    if (vitoria_inter > vitoria_gremio) printf("Inter venceu mais\n");
    else if(vitoria_gremio > vitoria_inter) printf("Gremio venceu mais\n");
    else printf("Não ouve vencedor\n");

    return 0;
}