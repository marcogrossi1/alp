#include<stdio.h>

int main(){

    char filo, class, diet1, diet2, diet3;

    scanf("%c", &filo);

    scanf("%c", &class);

    scanf("%c", &diet1);
    scanf("%c", &diet2);
    scanf("%c", &diet3);

    printf("%c\n",filo);
    printf("%c\n",class);
    printf("%c",diet1);
    printf("%c",diet2);
    printf("%c\n",diet3);

    int animal = 
    (filo == 'v')*(class == 'a')*(diet1 == 'c')*(1) +
    (filo == 'v')*(class == 'a')*(diet1 == 'o')*(2) +
    (filo == 'v')*(class == 'm')*(diet1 == 'o')*(3) +
    (filo == 'v')*(class == 'm')*(diet1 == 'h')*(diet3 == 'r')*(4) +
    (filo == 'i')*(class == 'i')*(diet1 == 'h')*(diet3 == 'm')*(5) +
    (filo == 'i')*(class == 'i')*(diet1 == 'h')*(diet3 == 'r')*(6) +
    (filo == 'i')*(class == 'a')*(diet1 == 'h')*(diet3 == 'm')*(7) +
    (filo == 'i')*(class == 'a')*(diet1 == 'o')*(8);
    
    switch (animal)
    {
    case 1: printf("aguia\n"); break;
    case 2: printf("pomba\n"); break;
    case 3: printf("homem\n"); break;
    case 4: printf("vaca\n"); break;
    case 5: printf("pulga\n"); break;
    case 6: printf("lagarta\n"); break;
    case 7: printf("sanguessuga\n"); break;
    case 8: printf("minhoca\n"); break;    
    }

    return 0;
}