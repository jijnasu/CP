//program to find the sum of two matrices
#include<stdio.h>
#define r 2
#define c 3

void input(int [][c]);
void display(int [][c]);
void sum_matrices(int [][c],int [][c],int [][c]);

void main()
{
    int A[r][c],B[r][c],SUM[r][c];
    // printf("Enter the size of the matrices : ");
    // scanf("%d%d",&r,&c);
    printf("Enter the 1st matrix : \n");
    input(A);
    printf("The 1st matrix is : \n");
    display(A);
    printf("Enter the 2nd matrix : \n");
    input(B);
    printf("The 2nd matrix is : \n");
    display(B);
    sum_matrices(A,B,SUM);
    printf("The sum of the matrices is : \n");
    display(SUM);

}


void input(int A[][c])
{
    int i,j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&A[i][j]);
}
void display(int A[][c])
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
}

void sum_matrices(int A[][c],int B[][c],int SUM[][c])
{
    int i,j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            SUM[i][j]=A[i][j]+B[i][j];
}



