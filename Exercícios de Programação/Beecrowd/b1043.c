#include<stdio.h>

int main(){

    double a,b,c,area,perim;
    scanf("%lf %lf %lf",&a,&b,&c);
    area=(a+b)*c/2;
    perim=a+b+c;

    if(a+b>c && a+c>b && b+c>a)
        printf("Perimetro = %.1f\n",perim);
    
    else
        printf("Area = %.1f\n",area);

    return 0;
}