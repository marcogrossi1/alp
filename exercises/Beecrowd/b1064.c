#include<stdio.h>

int main(){

    double media,soma=0,valor;
    int pos=0,i;

    for(i=0;i<6;i++){
        scanf("%lf", &valor);
        
        if(valor>0){
            pos++;
            soma+=valor;
        }
    }
    
    media=soma/pos;

    printf("%d valores positivos\n",pos);
    printf("%.1f\n",media);
    
    return 0;
}