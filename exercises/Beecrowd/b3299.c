#include<stdio.h>

void lucky(int a){
    
    if(scanf("%d", &a) == '1'){
        int b;
        if (a==1){
            scanf("%d", &b);
            
            if(b == 3)
                printf("%d%d es de Mala Suerte\n", a, b);

            else continue;
        }
    }
}

int main(){
    int n; scanf("%d", &n);
    lucky(n);

    return 0;
}