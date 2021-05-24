#include<stdio.h>
int main()
{
    int a[10][10],n,i,j;
    printf("Enter the size of square matrix : ");
    scanf("%d",&n);
    printf("Enter the matrix : \n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("The required matrix is : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(i<=j)
            {
                a[i][j]=0;
                printf("%d  ",a[i][j]);
            }
            else
            // {0
                // a[i][j]=1;
                printf("%d  ",a[i][j]);
            // }
        printf("\n");
    }
    return 0;
}
