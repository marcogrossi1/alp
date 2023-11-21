#include<stdio.h>

int main(){
    int num, num_controle = 0, i_controle;

    for(int i = 1; i<=100; i++){
        scanf("%d", &num);
        
        if(num>=num_controle){
            num_controle = num;
            i_controle = i;
        }
    }

    printf("%d\n%d\n", num_controle, i_controle);

    return 0;
}