#include<stdio.h>

unsigned long long int fibonacci(int n){
    unsigned long long int fibonacci_array[70];
    
    for(int i = 0; i<61; i++){
        fibonacci_array[i] = fibonacci_array [i-1] + fibonacci_array[i-2];
        fibonacci_array[0] = 0; 
        fibonacci_array[1] = 1;
        fibonacci_array[2] = 1;
    }

    return fibonacci_array[n];
}


int main(){
    int n, n_test_cases; scanf("%d", &n_test_cases);

    for(int i = 0; i<n_test_cases; i++){
        scanf("%d", &n);
        printf("Fib(%d) = %llu\n", n, fibonacci(n));
    }

    return 0;
}