#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],n,m,i,j;
    printf("Enter the size of matrix : ");
    scanf("%d%d",&n,&m);
    printf("Enter the matrix A: \n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    printf("Enter the matrix B: \n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&b[i][j]);
    printf("The sum of the matrices A & B : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d  ",a[i][j]+b[i][j]);
        printf("\n");
    }
    return 0;
}



