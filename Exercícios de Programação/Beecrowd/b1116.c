#include<stdio.h>

double menos(double a, double b){
        return a/b;
}

int main(){
    int total_casos; 
    scanf("%d", &total_casos);

    for (int i = 0; i<total_casos; i++){
        double num1, num2;
        scanf("%lf %lf", &num1, &num2);

        num2 ? printf("%.1f\n", menos(num1, num2)) : printf("divisao impossivel\n");
    }
    return 0;
}