#include<stdio.h>
int main()
{
    int a[10][10],n,m,i,j,max,min;
    printf("Enter the size of matrix(n*m) : ");
    scanf("%d%d",&n,&m);
    printf("Enter the matrix A: \n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    min=max=a[0][0];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            if(a[i][j]>max)
                max=a[i][j];
            if(a[i][j]<min)
                min=a[i][j];
        }
    printf("The maximum and minimum of matrix are : %d and %d...",max,min);
    return 0;
}

