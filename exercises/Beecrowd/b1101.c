#include<stdio.h>

int main(){

    int n, m,soma=0,aux;
    do{
        scanf("%d %d",&m, &n);

        if(n>0 && m>0){
        
            if (m>n){
                aux=m; m=n; n=aux;
            }

            while(m<n){
            soma=0;

                while(m<=n){
                    soma+=m;
                    printf("%d ", m);
                    m++;
                }
            }

            printf("Sum=%d\n",soma);
    
        }
    }  
    
    while(n>0 && m>0);

    return 0;
}