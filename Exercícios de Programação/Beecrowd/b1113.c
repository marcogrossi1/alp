#include<stdio.h>

int sentido(int a, int b){
    return (a==b)*0 + (a<b)*1 + (a>b)*2;
}

int main(){
    int num1, num2;
    
    do{
        scanf("%d %d", &num1, &num2);
        
        if (sentido(num1, num2))
            sentido(num1, num2) == 1 ? printf("Crescente\n") : printf("Decrescente\n");
    }

    while(num1!=num2);

    return 0;
}