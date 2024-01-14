#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    for (int i = 0; i<6; i++, num+=2){
        num = (num%2)*(num) + (num%2==0)*(num+1);

        printf("%d\n",num);
    }
    return 0;
}