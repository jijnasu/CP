#include<stdio.h>
int main()
{
    int n,i=1,j=1;
    char c='A';
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%c ",c+i-1);
        printf("\n");
    }
    return 0;
}
