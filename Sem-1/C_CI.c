//20BCSE50
//Kumar Jijnasu
//A2 19

//The program prints the Compound Interest...



#include<stdio.h>
void main()
{
    float R,T,ci,P,n;
    printf("Enter the following:\nPrincipal : ");
    scanf("%f",&P);
    printf("Enter Annual Nominal Interest Rate in percent : ");
    scanf("%f",&R);
    R/=100;
    printf("Time : ");
    scanf("%f",&T);
    printf("Enter the number of compounding per year : ");
    scanf("%f",&n);
    ci=P*pow(1+R/n,n*T);
    printf("\nThe Amount with Compound Interest = %f\n",ci);
}
