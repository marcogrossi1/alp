#include<stdio.h>

int main(){

    int a, lim, i=0; scanf("%d",&lim);

    do{
        scanf("%d",&a);

        if (a%2) printf("ODD ");
        else if(a!=0) printf("EVEN ");

        if (a>0) printf("POSITIVE\n");
        else if (a<0) printf("NEGATIVE\n");
        else printf("NULL\n");
        
        i++;
    }

    while(i<lim);

    
    return 0;
}