#include<stdio.h>
int main()
{
    int a[10][10],n,m,i,j,rsum[10];
    printf("Enter the order of matrix : ");
    scanf("%d%d",&n,&m);
    printf("Enter the matrix : \n");
    for(i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
        rsum[i]=0;
        for(j=0;j<m;j++)
            rsum[i]+=a[i][j];
        printf("Row %d sum = %d\n",i+1,rsum[i]);
    }
    return 0;
    
    
    // printf()
}