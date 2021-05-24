#include<stdio.h>
int main()
{
    int a[10][10],n,i,j,s=1;
    printf("Enter the size of square matrix : ");
    scanf("%d",&n);
    printf("Enter the matrix : \n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i][j]!=a[j][i])
            {
                s=0;
                break;
            }
    if(s==1)
        printf("The matrix is symmetrical...");
    else
        printf("The matrix is non-symmetrical...");

    return 0;
}
