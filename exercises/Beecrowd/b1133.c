#include<stdio.h>

void resto(int a, int b){
    if(a>b){int aux; aux = a; a = b; b = aux;}
    for(a++; a<b; a++)
        if (a%5 == 2 || a%5 == 3) printf("%d\n",a);
}

int main(){
    int a, b; scanf("%d %d", &a,&b);
    resto(a,b);
}