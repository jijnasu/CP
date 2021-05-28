//program to find transpose of a sparse from its triplet
#include<stdio.h>
#include<stdlib.h>

int input(int **,int,int);
void display(int **,int,int);
void find_triplet(int **,int **,int,int,int);
void trans(int **,int **,int);

void main()
{
    int **S,**T,**TT,r,c,non0,i;
    printf("Enter #rows & #columns : ");
    scanf("%d%d",&r,&c);
    S=(int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++)
        S[i]=(int*)malloc(c*sizeof(int));
    printf("Enter spars : \n");
    non0=input(S,r,c);
    printf("The Spars is : \n");
    display(S,r,c);
    T=(int**)malloc((non0+1)*sizeof(int*));
    for(i=0;i<non0+1;i++)
        T[i]=(int*)malloc(3*sizeof(int));
    TT=(int**)malloc((non0+1)*sizeof(int*));
    for(i=0;i<non0+1;i++)
        TT[i]=(int*)malloc(3*sizeof(int));
    find_triplet(S,T,r,c,non0);
    printf("The Triplet is : \n");
    display(T,non0+1,3);
    trans(T,TT,non0);
    printf("The Transpose Triplet is : \n");
    display(TT,non0+1,3);
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

void trans(int **m,int **t,int non0)
{
    int i=0,j=0,k=1;
    t[0][0]=m[0][1];
    t[0][1]=m[0][0];
    t[0][2]=non0;
    for(i=0;i<m[0][1];i++)
    {
        for(j=1;j<=non0;j++)
            if(m[j][1]==i)
            {
                t[k][0]=i;
                t[k][1]=m[j][0];
                t[k][2]=m[j][2];
                k++;
            }
    }    

}