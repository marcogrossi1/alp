#include<stdio.h>

int main(){
    int n; scanf("%d", &n);

        for(int x = 1, i=0; i<n; i++, x+=4)
            printf("%d %d %d PUM\n", x, x+1, x+2);

    return 0;
}