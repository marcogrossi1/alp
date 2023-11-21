#include<stdio.h>

int strlength(char *str){
    int total=0;

    while(str[total] != '\0')
        total++;

    return total;
}

void tipo_de_palavra(char *palavra){
    (strlength(palavra) >= 10) ? printf("palavrao\n") : printf("palavrinha\n");
}

int main(){
    char palavra [21]; 
    scanf("%s", palavra);

    tipo_de_palavra(palavra);

    return 0;
}