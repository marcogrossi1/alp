#include<stdio.h>

int main(){

    int a,b,c,aux;
    scanf("%d %d %d",&a,&b,&c);
    int a1=a,b1=b,c1=c;
  
    if(b>c){
          aux=b;
          b=c;
          c=aux;
      }

    if(a>b){
        aux=a;
        a=b;
        b=aux;
    }

    if(b>c){
        aux=b;
        b=c;
        c=aux;
    }

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("\n");
    printf("%d\n",a1);
    printf("%d\n",b1);
    printf("%d\n",c1);

    return 0;
}