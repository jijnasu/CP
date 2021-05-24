#include<stdio.h>
#include<math.h>
int main()
{
    int sq,i=2;
    printf("The prefects squares are : ");
    for(;i<=10000;i+=2)
    {
        sq=sqrt(i);
        if(sq*sq==i)
            printf("%d, ",i);
    }
    return 0;
}