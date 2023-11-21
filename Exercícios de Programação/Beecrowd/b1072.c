#include<stdio.h>

int main(){
    
    int in, contador, i=0; 
    scanf("%d", &contador);

    for (int num; i<contador; i++){
        scanf("%d", &num);
        in += (num>9 && num <21);
    }

    int out = i-in;

    printf("%d in\n",in);
    printf("%d out\n",out);

    return 0;
}