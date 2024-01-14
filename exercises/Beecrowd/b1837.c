#include<stdio.h>

int quociente(int a, int b){
    return a/b;
}

int resto(int a, int b){
    return a%b;
}

void euclidean_division(int a, int b){
    int r = resto(a,b), q = quociente(a,b);
    
    if (a<0 && b>0 && r < 0){
        q-= 1;
        r += b;
    }

    else if(r<0){
        q+=1;
        r-=b;
    }

    printf("%d %d\n", q, r);
}

int main(){
    int a, b; scanf("%d %d", &a, &b);

    euclidean_division(a,b);

    return 0;
}