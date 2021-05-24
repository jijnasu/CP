#include<stdio.h>
int main()
{
    int a[10][10],m,n,i,j;
    printf("Enter the dimensions of matrix(n*m) : ");
    scanf("%d%d",&n,&m);
    printf("Enter the matrix : \n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    printf("The matrix is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d  ",a[i][j]);
        printf("\n");
    }
    return 0;
}

