#include<stdio.h>

int cube(int a){
    return a*a*a;
}

int square(int a){
    return a*a;
}
w
void linha(int a){
    for (int i = 0, n = 1; i<a; i++, n++){
        printf("%d %d %d\n", n, square(n), cube(n));
        printf("%d %d %d\n", n, square(n)+1, cube(n)+1);
    }
}

int main(){
    int n; scanf("%d", &n);
    linha(n);

    return 0;
}