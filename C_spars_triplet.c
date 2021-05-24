//program to find triplet of a sparse matrix
#include<stdio.h>
#include<stdlib.h>

int input(int **,int,int);
void display(int **,int,int);
void find_triplet(int **,int **,int,int,int);


void main()
{
    int **S,**T,r,c,non0,i;
    printf("Enter #rows & #columns : ");
    scanf("%d%d",&r,&c);
    S=(int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++)
        S[i]=(int*)malloc(c*sizeof(int));
    printf("Enter Sparse : \n");
    non0=input(S,r,c);
    printf("The Sparse is : \n");
    display(S,r,c);
    T=(int**)malloc((non0+1)*sizeof(int*));
    for(i=0;i<non0+1;i++)
        T[i]=(int*)malloc(3*sizeof(int));
    find_triplet(S,T,r,c,non0);
    printf("The Triplet is : \n");
    display(T,non0+1,3);
}



int input(int **m,int r,int c)
{
    int i,j,non0=0;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
            if(m[i][j]!=0)
                non0++;
        }
    return non0;
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

void find_triplet(int **m,int **t,int r,int c,int non0)
{
    int i,j,k=1;
    t[0][0]=r;
    t[0][1]=c;
    t[0][2]=non0;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(m[i][j]!=0)
            {
                t[k][0]=i;
                t[k][1]=j;
                t[k][2]=m[i][j];
                k++;
            }
}
