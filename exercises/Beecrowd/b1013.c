#include<stdio.h>

int mod(int a){
    if (a<0)
        a = -a;

    return a;
}

int maior(int a, int b, int c){
    int  maiorABC;
    
    maiorABC = (c+(a+b+mod(a-b))/2+mod(c-(a+b+mod(a-b))/2))/2;
    
    return maiorABC;
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d eh o maior\n", maior(a,b,c));

    return 0;
}