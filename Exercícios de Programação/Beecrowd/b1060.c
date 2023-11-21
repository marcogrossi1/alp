#include<stdio.h>

int main(){
    double n1,n2,n3,n4,n5,n6,pos;
    scanf("%lf %lf %lf %lf %lf %lf", &n1,&n2,&n3,&n4,&n5,&n6);

    pos=(n1>0)+
        (n2>0)+
        (n3>0)+
        (n4>0)+
        (n5>0)+
        (n6>0);

    printf("%.0f valores positivos\n",pos);
    
    return 0;
}