#include <stdio.h>

int mod(int num, int a){
    if (num%a == 2) 
        return 1;
    else
        return 0;
}

int main(){
    int a;
    scanf("%d", &a);

    for (int i = 0; i<10000; i++){
        if (mod(i, a))
            printf("%d\n", i);
    }

    return 0;
}   