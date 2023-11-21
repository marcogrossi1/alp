#include<stdio.h>

int main()
{
    int a,b,c,d,e,par,imp,pos,neg;
    
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    par=imp=pos=neg=0;

//(pos/neg)
    if (a>0) pos+=1;
    else if (a<0) neg+=1;
    
    if (b>0) pos+=1;
    else  if (b<0) neg+=1;

    if (c>0) pos+=1;
    else  if (c<0) neg+=1;

    if (d>0) pos+=1;
    else  if (d<0) neg+=1;
    
    if (e>0) pos+=1;
    else  if (e<0) neg+=1;
//(par/imp)
    if(a%2==0) par+=1;
    else imp+=1;

    if(b%2==0) par+=1;
    else imp+=1;

    if(c%2==0) par+=1;
    else imp+=1;

    if(d%2==0) par+=1;
    else imp+=1;

    if(e%2==0) par+=1;
    else imp+=1;

    printf("%d valor(es) par(es)\n",par);
    printf("%d valor(es) impar(es)\n",imp);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);    

    return 0;
}