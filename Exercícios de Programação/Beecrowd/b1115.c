#include<stdio.h>

int quadrante(int x, int y){
    return (x>0 && y>0)*1 + (x<0 && y>0)*2+ (x<0 && y<0)*3 + (x>0 && y<0)*4;
}

int main(){
    for(int x = 1, y = 1; quadrante(x,y);){
        scanf("%d %d", &x, &y);
        switch (quadrante(x,y)){
            case 1: printf("primeiro\n"); break;
            case 2: printf("segundo\n"); break;
            case 3: printf("terceiro\n"); break;
            case 4: printf("quarto\n");
        }
    }

    return 0;
}