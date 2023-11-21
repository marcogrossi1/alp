#include<stdio.h>

int main(){
    char character;
    int i=0, soma=0;

    while(scanf("%c",&character) != EOF){
        int column = character;

        if(character!='\n'){
            column-=64;
            soma+=(i==0)*column;
            soma+=(i==1)*(soma*25+column);
            soma+=(i==2)*(soma*25+column);
            soma+=(i==3)*(17000);
            i++;
        }

        else {
            if(soma<16385 && soma>0)
                printf("%d\n",soma);
            else if(soma>16384)
                printf("Essa coluna nao existe Tobias!\n");
            soma=i=0;
        }
    }
    return 0;
}