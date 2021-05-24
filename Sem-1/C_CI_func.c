#include<stdio.h>
#include<math.h>
float CI(float ,float, float, float);
void main()
{
    float R,T,P,n;
    printf("Enter the following:\nPrincipal : ");
    scanf("%f",&P);
    printf("Enter Annual Nominal Interest Rate in percent : ");
    scanf("%f",&R);
    R/=100;
    printf("Time : ");
    scanf("%f",&T);
    printf("Enter the number of compounding per year : ");
    scanf("%f",&n);
    printf("\nThe Amount with Compound Interest = %f\n",CI(P,R,T,n));
}

float CI(float P,float R, float T, float n)
{
    return P*pow(1+R/n,n*T);
}



//    float ci=();
//    printf("==%f==%f==",ci,pow(1+R/n,n*T));

