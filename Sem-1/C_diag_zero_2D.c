#include<stdio.h>
int main()
{
    int a[10][10],s,i,j;
    printf("Enter the size of squatre matrix : ");
    scanf("%d",&s);
    for(i=0;i<s;i++)
        for(j=0;j<s;j++)
            if(i==j)
                a[i][j]=0;
            else
                a[i][j]=1;
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
            printf("%d  ",a[i][j]);
        printf("\n");
    }
    return 0;
}