#include<stdio.h>

int somatorio(int a, int b){
    if (a>b){
        int aux; aux = a; a = b; b = aux;
    }
    return (b - a + 1) * (a + b)/2;
}

int total_n13(int a, int b){
    int total = 0;

    if (a>b){
        int aux; aux = a; a = b; b = aux;
    }
    
    while(a%13 != 0)
        a++;
    
    while(a<=b){
        total += a;
        a += 13;
    }

    return total;
}


int somatorio_m13(int a, int b){
    return somatorio(a,b) - total_n13(a,b);
}

int main(){
    int a, b; 
    scanf("%d %d", &a, &b);
    printf("%d\n", somatorio_m13(a,b)); 

    return 0;
}