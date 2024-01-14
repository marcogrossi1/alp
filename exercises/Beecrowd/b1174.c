#include<stdio.h>

void scan_array(double array[]){
    int i = 0;

    for(double num; i < 100; i++){
        scanf("%lf", &num);
        array [i] = num;
    }
}

void printar(double array[]){
    scan_array(array);
    int i = 0;

    for (double num; i<100; i++){
        num = array[i];

        if(num <= 10)
            printf("A[%d] = %.1f\n", i, num);
    }
}

int main(){
    double array[101];

    printar(array);

    return 0;
}