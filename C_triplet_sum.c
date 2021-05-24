//program to find the sum of two sparse in triplet form
#include<stdio.h>
#include<stdlib.h>

int input(int **,int,int);
void display(int **,int,int);
void find_triplet(int **,int **,int,int,int);
void sum(int **,int **,int **);



void main()
{
    int **S1,**S2,**T1,**T2,**TS,r,c,n1,n2,i;
    printf("Enter #rows & #columns : ");
    scanf("%d%d",&r,&c);
    S1=(int**)malloc(r*sizeof(int*));
    S2=(int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++)
    {
        S1[i]=(int*)malloc(c*sizeof(int));
        S2[i]=(int*)malloc(c*sizeof(int));
    }
    // for(i=0;i<r;i++)
    printf("Enter 1st spars : \n");
    n1=input(S1,r,c);
    printf("The Spars is : \n");
    display(S1,r,c);
    printf("Enter 2nd spars : \n");
    n2=input(S2,r,c);
    printf("The Spars is : \n");
    display(S2,r,c);
    T1=(int**)malloc((n1+1)*sizeof(int*));
    for(i=0;i<n1+1;i++)
        T1[i]=(int*)malloc(3*sizeof(int));
    T2=(int**)malloc((n2+1)*sizeof(int*));
    for(i=0;i<n2+1;i++)
        T2[i]=(int*)malloc(3*sizeof(int));
    TS=(int**)malloc((n1+n2+1)*sizeof(int*));
    for(i=0;i<n1+n2+1;i++)
        TS[i]=(int*)malloc(3*sizeof(int));
    find_triplet(S1,T1,r,c,n1);
    find_triplet(S2,T2,r,c,n2);
    printf("The 1st Triplet is : \n");
    display(T1,n1+1,3);
    printf("The 2nd Triplet is : \n");
    display(T2,n2+1,3);
    sum(T1,T2,TS);
    printf("The sum of triplets : \n");
    display(TS,TS[0][2]+1,3);
    // printf("%d")
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

void sum(int **T1,int **T2,int **TS)
{
    int i=1,j=1,k=1;
    // *(MT+2)=*(M+2);
    // *MT=*(M+1);
    // *(MT+1)=*M;
    while(i<=T1[0][2] && j<=T2[0][2])
        if(T1[i][0]==T2[j][0])    
            if(T1[i][1]==T2[j][1])
            {
                TS[k][0]=T1[i][0];
                TS[k][1]=T1[i][1];
                TS[k][2]=T1[i][2]+T2[j][2];
                k++;
                i++;
                j++;
            }
            else if(T1[i][1]<T2[j][1])
            {
                TS[k][0]=T1[i][0];
                TS[k][1]=T1[i][1];
                TS[k][2]=T1[i][2];
                k++;
                i++;
            }
            else
            {
                TS[k][0]=T2[j][0];
                TS[k][1]=T2[j][1];
                TS[k][2]=T2[j][2];
                k++;
                j++;
            }
        else if(T1[i][0]<T2[j][0])
        {
            TS[k][0]=T1[i][0];
            TS[k][1]=T1[i][1];
            TS[k][2]=T1[i][2];
            k++;
            i++;            
        }
        else
        {
            TS[k][0]=T2[j][0];
            TS[k][1]=T2[j][1];
            TS[k][2]=T2[j][2];
            k++;
            j++;
        }
    
    if(i<=T1[0][2])
        while(i<=T1[0][2])
        {
            TS[k][0]=T1[i][0];
            TS[k][1]=T1[i][1];
            TS[k][2]=T1[i][2];
            k++;
            i++;
        }
    else if(j<=T2[0][2])
        while(j<=T2[0][2])
        {
            TS[k][0]=T2[j][0];
            TS[k][1]=T2[j][1];
            TS[k][2]=T2[j][2];
            k++;
            j++;
        }
        
    
    TS[0][0]=T1[0][0];
    TS[0][1]=T1[0][1];
    TS[0][2]=k-1;
    
}
