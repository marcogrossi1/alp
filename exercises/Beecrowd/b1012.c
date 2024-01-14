#include<stdio.h>

double potencia(double a, double b){
    for (int i = 1; i<b; i++)
        a = a*a;
    return a;
}

double area_tri(double base, double altura){
    return base*altura/2;
}

double area_circ(double raio){
    const double PI = 3.14159;
    return PI*potencia(raio,2);
}

double area_tra(double base_maior, double base_menor, double altura){
    return (base_maior + base_menor)*altura/2;
}

double area_qua(double lado){
    return potencia(lado,2);
}

double area_ret(double lado1, double lado2){
    return lado1*lado2;
}

int main(){
    double a,b,c;
    scanf("%lf %lf %lf", &a,&b,&c);

        printf("TRIANGULO: %.3f\n",area_tri(a,c));
        printf("CIRCULO: %.3f\n",area_circ(c));
        printf("TRAPEZIO: %.3f\n",area_tra(a,b,c));
        printf("QUADRADO: %.3f\n",area_qua(b));
        printf("RETANGULO: %.3f\n",area_ret(a,b));

    return 0;
}