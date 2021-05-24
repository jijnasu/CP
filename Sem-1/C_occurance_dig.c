#include<stdio.h>
int main()
{
    long n=112233;
    int  i,dig[10];
    printf("Enter a number : ");
    scanf("%ld",&n);
    for(i=0;i<10;i++)
        dig[i]=0;
    while(n>0)
    {   
        i=n%10;
        // printf("%d\n",n);
       switch(i)
       {
           case 0:  dig[0]++;
                   break;
           case 1:  dig[1]++;
                   break;
           case 2:  dig[2]++;
                   break;
           case 3:  dig[3]++;
                   break;
           case 4:  dig[4]++;
                   break;
           case 5:  dig[5]++;
                   break;
           case 6:  dig[6]++;
                   break;
           case 7:  dig[7]++;
                   break;
           case 8:  dig[8]++;
                   break;
           case 9:  dig[9]++;
                   break;
       }
        n/=10;
    }
    for(i=0;i<10;i++)
        printf("digit %d : %d\n",i,dig[i]);
    return 0;
}
