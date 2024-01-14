#include<stdio.h>

int main(){

    int p,j1,j2,r,a;
    scanf("%d %d %d %d %d", &p,&j1,&j2,&r,&a);

    if(r!=a)
        printf("Jogador 1 ganha!\n");

    else if(a==1)
        printf("Jogador 2 ganha!\n");
    
    else if(a==0){
        if(p && (j1+j2)%2==1) 
            printf("Jogador 2 ganha!\n");
        else if(p && (j1+j2)%2==0)
            printf("Jogador 1 ganha!\n");
        else if(p==0 && (j1+j2)%2==0)
            printf("Jogador 2 ganha!\n");
        else if(p==0 && (j1+j2)%2==1)
            printf("Jogador 1 ganha!\n");
    }
    
    return 0;
}