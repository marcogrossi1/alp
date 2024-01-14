#include<stdio.h>

int main(){

    double n1,n2,n3,n4,media,nr;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);

    media=(2*n1+3*n2+4*n3+n4)/10;

    if(media>=7.0){
        printf("Media: %.1f\n",media);
        printf("Aluno aprovado.\n");
    }

    else if(media<5.0){
        printf("Media: %.1f\n",media);
        printf("Aluno reprovado.\n");
    }

    else{   
        scanf("%lf",&nr);
        if((nr+media)/2>=5){
            printf("Media: %.1f\n",media);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1f\n",nr);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",(nr+media)/2);
        }
            else {
            printf("Media: %.1f\n",media);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1f\n",nr);
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",(nr+media)/2);
            }
    }
    return 0;
}