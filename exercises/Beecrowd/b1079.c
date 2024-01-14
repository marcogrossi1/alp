#include<stdio.h>

double media(double a, double b, double c){
    return ((2*a + 3*b + 5*c)/10);
}

int main(){
    int nMedias;
    scanf("%d", &nMedias);
    
    for(int i = 0; i<nMedias; i++){
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);

        printf("%.1f\n", media(a,b,c));
    }

    return 0;
}