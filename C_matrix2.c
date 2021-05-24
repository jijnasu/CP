#include<stdio.h>
#define size 5

void input(int *,int,int);
void display(int *,int,int);

void main()
{
    int r,c,a[size][size];
    printf("Enter the size of the matrix : ");
    scanf("%d%d",&r,&c);
    printf("Enter the matrix : \n");
    input(a,r,c);
    display(a,r,c);
}


void input(int *a,int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",a+i*c+j);
}
void display(int *a,int r,int c)
{
    printf("The matrix is : \n");
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",*(a+i*c+j));
        printf("\n");
    }

}