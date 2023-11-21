#include<stdio.h>

int main(){
    
    double tax1,tax2,tax3,sal=0.00,taxTotal; 
    scanf("%lf", &sal);

        tax1=0.08;
        tax2=0.18;
        tax3=0.28;
   
        if (sal<=2000.00) 
            printf("Isento\n");
            
            //2000<sal<3000
            else if(sal<=3000) {
                taxTotal=(tax1*(sal-2000));
                printf("R$ %.2f\n", taxTotal);
            }
                else if(sal<=4500) {
                    taxTotal=((tax1*1000)+(tax2*(sal-3000)));
                    printf("R$ %.2f\n",taxTotal);
                }
                    else if(sal>4500) {
                        taxTotal=((tax1*1000)+(tax2*1500)+(tax3*(sal-4500)));
                        printf("R$ %.2f\n",taxTotal);
                    }


    return 0;
}