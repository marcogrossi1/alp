#include<stdio.h>

int main(){

    int num,a,g,d;
    a=g=d=0;

    do{
        scanf("%d", &num);
        
        if(num!=4){
            if(num==1) a++;
            else if(num==2) g++;
            else if(num==3) d++;
        }
    }

    while(num!=4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);

    return 0;
}