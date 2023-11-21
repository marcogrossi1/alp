#include<stdio.h>

int main(){
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    if(a!=b){
        if(a!=c)
            printf("A\n");
        else
            printf("B\n");
    }

    else if(b!=c)
        printf("C\n");
    
    else
        printf("*\n");
        
    return 0;
}