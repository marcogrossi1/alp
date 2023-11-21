#include<stdio.h>

int main(){

    int lim;
    scanf("%d", &lim);
    lim-=(lim%2);

    for(int n = 2, square; n<=lim; n+=2){
        square = n*n;
        printf("%d^2 = %d\n", n, square);
    }

    return 0;
}