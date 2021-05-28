//program to find the transpose of a matrix
#include<stdio.h>
#include<stdlib.h>

void input(int **,int,int);
void display(int **,int,int);
void transpose(int **,int **,int,int);

void main()
{
    int **A,**T,r,c,i;
    printf("Enter #rows & #columns : ");
    scanf("%d%d",&r,&c);
    A=(int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++)
        A[i]=(int*)malloc(c*sizeof(int));
    T=(int**)malloc(c*sizeof(int*));
    for(i=0;i<c;i++)
        T[i]=(int*)malloc(r*sizeof(int));
    printf("Enter the matrix : \n");
    input(A,r,c);
    printf("The matrix is : \n");
    display(A,r,c);
    transpose(A,T,r,c);
    printf("Transpose of the matrix is : \n");
    display(T,c,r);

}


void input(int **m,int r,int c)
{
    int i,j,non0=0;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&m[i][j]);
}

void display(int **m,int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",m[i][j]);
        printf("\n");
    }
}


void transpose(int **A,int **T,int r,int c)
{
    int i,j;
    for(i=0;i<c;i++)
        for(j=0;j<r;j++)
            T[i][j]=A[j][i];
}