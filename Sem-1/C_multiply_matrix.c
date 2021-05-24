#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],n,m,p,q,i,j,k;
    printf("Enter the size of matrix A: ");
    scanf("%d%d",&n,&m);
    printf("Enter the matrix A: \n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    printf("Enter the size of matrix B: ");
    scanf("%d%d",&p,&q);
    printf("Enter the matrix B: \n");
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
            scanf("%d",&b[i][j]);
    if(m==p)
    {
        for(i=0;i<n;i++)
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<m;k++)
                    c[i][j]+=a[i][k]*b[k][j];
            }


        printf("The multiplication of the matrices A & B : \n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
                printf("%d  ",c[i][j]);
            printf("\n");
        }
    }
    else
        printf("Matrix can't be multiplied...");
    return 0;
}
