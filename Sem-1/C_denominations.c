#include<stdio.h>
int main()
{
    int amt,r2000=0,r500=0,r200=0,r100=0,r50=0,r20=0,r10=0,r5=0,r2=0,r1=0;
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
//    if(amt>=1)
//    {
    r1=amt;
//        amt-=r1;
//    }
    printf("The denominations of your amount are : \n");
    printf("2000 rupee note : %d\n",r2000);
    printf("500 rupee note : %d\n",r500);
    printf("200 rupee note : %d\n",r200);
    printf("100 rupee note : %d\n",r100);
    printf("50 rupee note : %d\n",r50);
    printf("20 rupee note : %d\n",r20);
    printf("10 rupee note : %d\n",r10);
    printf("5 rupee coin : %d\n",r5);
    printf("2 rupee coin : %d\n",r2);
    printf("1 rupee coin : %d\n",r1);
    return 0;
}
