#include<stdio.h>

int main()
{
    int a,b,c,d, c1;
    scanf("%d %d %d %d", &a,&b,&c,&d);

    c1=a%2;

    if(b>c && d>a && (c+d)>(a+b) && c>0 && d>0 && c1==0)
        printf("Valores aceitos\n");
    
    else printf("Valores nao aceitos\n");

    return 0;
}