#include<stdio.h>

int main()
{
    const double PI = 3.14159;
    double raio, volume;

    scanf("%lf", &raio);

    volume = raio*raio*raio*PI*(4.0/3);

    printf("VOLUME = %.3f\n", volume);
    return 0;
}