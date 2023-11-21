#include<stdio.h>
char is_prime(long int n){
    int c = 0;

    for(int i = 1; i<n; ++i){
        if (n%i == 0)
            c++;

        if (c>2)
            break;
    }

    if(c == 1)
        return 'S';
    else 
        return 'N';
}
int main(){
    long int n;
    scanf("%ld", &n);

    printf("%c\n", is_prime(n));

    return 0;
}