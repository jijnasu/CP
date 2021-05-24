#include<stdio.h>
#include<math.h>
int main()
{
    int i=1000,sq,sqA,sqB,AA,BB;
    printf("The numbers are : ");
    for(i=1000;i<=9999;i++)
    {
        AA=i/100;
        BB=i%100;
        // if(AA%10==AA/10 && BB%10==BB/10)
        // {
            // printf("%d, ",i);
        sq=sqrt(i);
        sqA=sqrt(AA);
        sqB=sqrt(BB);
            // printf("%d, ",i);
        if(sq*sq==i && sqA*sqA==AA && sqB*sqB==BB)
            printf("%d, ",i);

        // }
    }
    return 0;
}
