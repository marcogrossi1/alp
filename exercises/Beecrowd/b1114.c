#include<stdio.h>

int correct_password(int a){
    return (a!=2002);
}

int main(){

    for(int password = 0; correct_password(password);){
        scanf("%d", &password);
        correct_password(password) ? printf("Senha Invalida\n") : printf("Acesso Permitido\n");
    }

    return 0;
}