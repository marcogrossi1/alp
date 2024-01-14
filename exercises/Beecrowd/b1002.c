#include <stdio.h>

int main()
{  
    double pi = 3.14159, raio, area;
    scanf("%lf", &raio);
    area = raio*raio*pi;
    printf("A = %.4f\n", area);
    return 0;
}