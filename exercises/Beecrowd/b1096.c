#include <stdio.h>

int main(){

    double i = 0;
    double j = 1;

    while (i <= 2){
        while (j <= i+3){
            i ? printf("I=%.1f J=%.1f\n", i, j) : printf("I=%.0f J=%.0f\n", i, j);

            j += 1;
        }

        i += 0.2;
        j = i+1;
    }

    return 0;
}