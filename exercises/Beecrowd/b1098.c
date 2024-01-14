#include<stdio.h>

void linha(){
    for(double i = 0, j = 1; i<=2; i+=0.2, j = i+1){
        for(; j <= i+3; j++){
            i > 0 ? printf("I=%.1f J=%.1f\n", i, j) : printf("I=%.0f J=%.0f\n", i, j);
        }
    }
}

int main(){
    linha();
    return 0;
}