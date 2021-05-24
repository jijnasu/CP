#include<stdio.h>
int main()
{
    int n,i=1,j=1;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
