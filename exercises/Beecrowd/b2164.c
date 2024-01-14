#include <stdio.h>
#include <math.h>

double binet_formula(double a){
    return (pow((1 + sqrt(5))/2 , a) - pow((1 - sqrt(5)/2) , a)) / sqrt(5);
}

int main(){
    int n; scanf("%d", &n);

    printf("%.0f.0\n", binet_formula(n));

    return 0;
}