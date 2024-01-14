#include<stdio.h>

int main(){

    int num1,valor=1;
    scanf("%d",&num1);

    do{
        printf("%d\n",valor);
        valor+=2;
    }

    while(valor<=num1);

    return 0;
}