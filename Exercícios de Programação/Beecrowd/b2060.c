#include<stdio.h>

int main(){
    
    int total,num,div2,div3,div4,div5;
    scanf("%d", &total);
    div2=div3=div4=div5=0;
    
    for(int i=0;i<total;i++){
        scanf("%d",&num);
        div2+=(num%2==0);
        div3+=(num%3==0);
        div4+=(num%4==0);
        div5+=(num%5==0);
    }

    printf("%d Multiplo(s) de 2\n",div2);
    printf("%d Multiplo(s) de 3\n",div3);
    printf("%d Multiplo(s) de 4\n",div4);
    printf("%d Multiplo(s) de 5\n",div5); 

    return 0;
}