#include<stdio.h>
int main()
{
    int amt,r2000,r500,r200,r100,r50,r20,r10,r5,r2,r1;
    printf("Enter your Amount : ");
    scanf("%d",&amt);
    if(amt>=2000)
    {
        r2000=amt/2000;
        amt-=(r2000*2000);
    }
    if(amt>=500)
    {
        r500=amt/500;
        amt-=(r500*500);
    }
    if(amt>=200)
    {
        r200=amt/200;
        amt-=(r200*200);
    }
    if(amt>=100)
    {
        r100=amt/100;
        amt-=(r100*100);
    }
    if(amt>=50)
    {
        r50=amt/50;
        amt-=(r50*50);
    }
    if(amt>=20)
    {
        r20=amt/20;
        amt-=(r20*20);
    }
    if(amt>=10)
    {
        r10=amt/10;
        amt-=(r10*10);
    }
    if(amt>=5)
    {
        r5=amt/5;
        amt-=(r5*5);
    }
    if(amt>=2)
    {
        r2=amt/2;
        amt-=(r2*2);
    }
    if(amt>=1)
    {
        r1=amt;
        amt-=r1;
    }
    printf("The dinominations of your amount are : \n");
    printf(" rupee note : %d\n"r);
    printf(" rupee note : %d\n"r);
    printf(" rupee note : %d\n"r);
    printf(" rupee note : %d\n"r);
    printf(" rupee note : %d\n"r);
    printf(" rupee note : %d\n"r);
    printf(" rupee note : %d\n"r);
    printf(" rupee note : %d\n"r);
    printf(" rupee note : %d\n"r);
    printf(" rupee note : %d\n"r);

}
