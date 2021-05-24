#include<stdio.h>
int main()
{
    int range,i,j,c=0;
    printf("Enter the range : ");
    scanf("%d",&range);
    printf("The prime numbers are : %d",2);
    for(i=3;i<=range;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
                break;
        }
        if (i%j!=0)
            printf(", %d",i);

    }
    return 0;

}

