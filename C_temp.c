




#include<stdio.h>
#include<stdlib.h>
struct NODE
{
    int info;
    struct NODE *next;
};
typedef struct NODE node;

void traverse(node *s)
{
    node *temp;
    temp=s;
    while(temp!=NULL)
    {
        printf("%d\t", temp->info);
        temp=temp->next;
    }
    printf("\n\n");
}

node* insertatbegin(node *s)
{
    node *new;
    new=(node*)malloc(sizeof(node));
    printf("\n input node that will be added to 1st :");
    scanf("%d",&(new->info));
    new->next=s;
    s=new;
    return s;
}

void insertatend(node *s)
{
    node *new;
    new=(node*)malloc(sizeof(node));
    printf("\n input node that will be added to last :");
    scanf("%d",&(new->info));
    new->next=NULL;
    while(s->next!=NULL)
    {
        s=s->next;
    }
    s->next=new;
}

void searchele(node *s, int ele)
{
    node *ptr;
    ptr=s;
    while(ptr!=NULL)
    {
        if(ptr->info==ele)
        {
            printf("element is found\n");
            break;
        }
        else
        {
            ptr=ptr->next;
        }
    }
}

void insertaftervalue(node *s, int val)
{
    node *temp, *new;
    temp=s;
    while(temp!=NULL)
    {
        if(temp->info==val)
        {
            break;
        }
        else
        {
            temp=temp->next;
        }
    }
    new=(node*)malloc(sizeof(node));
    printf("input the element :");
    scanf("%d",&(new->info));
    if(temp!=NULL)
    {
        new->next=temp->next;
        temp->next=new;
    }
    else
    {
        printf("the node ain't present\n");
    }
}

void insert_at_ith(node* s, int i)
{
    node *ptr, *new;
    int k;
    k=0;
    ptr=s;
    while(k<i-1)
    {
        ptr=ptr->next;
        k++;
    }
    new=(node*)malloc(sizeof(node));
    printf("input new node which will be inserted after ith position :");
    scanf("%d",&(new->info));
    new->next=ptr->next;
    ptr->next=new;
}

int main()
{
    node *start, *temp;
    //allocate memory for nodes in the single linked list in heap
    int opt,i,val,ele;
    while(1)
    {
        printf("MENU \n\n 1.create a linked list \n2. traversal \n3. insert an element at begin \n4. insert an element at end \n5. insert an element after ith node of list \n6. insert a new node after a particular value of list \n7. search an element from a list \n8. exit \n");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            start = (node*)malloc(sizeof(node));
            printf("input to the 1st node :");
            scanf("%d",&(start->info));
            start->next=NULL;
            temp=start;
            char ch='y';
            while(ch=='y')
            {
                temp->next=(node*)malloc(sizeof(node));
                temp=temp->next;
                printf("\n input node :");
                scanf("%d",&(temp->info));
                printf("enter y to continue or else n to stop :");
                scanf(" %c",&ch);
            }
            temp->next=NULL;
            break;
        case 2:
            printf("the list is :\n");
            traverse(start);
            break;
        case 3:
            start=insertatbegin(start);
            break;
        case 4:
            insertatend(start);
            break;
        case 5:
            printf("enter the location :");
            scanf("%d",&i);
            insert_at_ith(start,i);
            break;
        case 6:
            printf("enter the value after which you wanna insert the element :");
            scanf("%d",&val);
            insertaftervalue(start,val);
            break;
        case 7:
            printf("enter the element you wanna search :");
            scanf("%d",&ele);
            searchele(start,ele);
            break;
        case 8:
            exit(1);
            break;
        default :
            printf("invalid option\n");
        }
    }
    return 0;
}






// #include<stdio.h>
// #include<stdlib.h>
// // #define non0 6
// // #define col 3

// void input(int *,int *,int,int);
// void display(int *,int,int);
// void find_triplet(int *,int *,int,int,int);
// void sum(int *,int *,int *);


// void main()
// {
//     int *S1,*S2,*T1,*T2,*TS,r,c,n1,n2,i;
//     printf("Enter the #Rows in spars : ");
//     scanf("%d",&r);
//     printf("Enter the #Columns in spars : ");
//     scanf("%d",&c);
//     S1=(int *)malloc(r*c*sizeof(int));
//     S2=(int *)malloc(r*c*sizeof(int));
//     printf("Enter the 1st spars : \n");
//     input(S1,&n1,r,c);
//     printf("The 1st spars is : \n");
//     display(S1,r,c);
//     printf("Enter the 2nd spars : \n");
//     input(S2,&n2,r,c);
//     printf("The 2nd spars is : \n");
//     display(S2,r,c);
//     T1=(int *)malloc(3 * (n1+1) * sizeof(int));
//     T2=(int *)malloc(3 * (n2+1) * sizeof(int));
//     TS=(int *)malloc(3 * (n2+n1+1) * sizeof(int));
//     find_triplet(S1,T1,n1,r,c);
//     find_triplet(S2,T2,n1,r,c);
//     // display(T1,*(T1+2)+1,3);
//     printf("##%d##",*(T1+2));
//     // display(T2,*(T2+2)+1,3);
//     sum(T1,T2,TS);
//     printf("##%d##",*(TS+2));
//     printf("The sum of the two triplets is : \n");
//     // display(TS,*(TS+2)+1,3);
//     free(S1);
//     free(S2);
//     free(T1);
//     free(T2);
//     free(TS);
// }

// void input(int *M,int *non0,int r,int c)
// {
//     int i=0,j=0;
//     for(i=0;i<r;i++)
//         for(j=0;j<c;j++)
//         {
//             scanf("%d",M+i*c+j);
//             if(*(M+i*c+j)!=0)
//                 (*non0)++;
//         }
            
// }

// void display(int *M,int p,int q)
// {
//     int i=0,j=0;
//     for(i=0;i<p;i++)
//     {
//         for(j=0;j<q;j++)
//             printf("%d ",*(M+i*q+j));
//         printf("\n");
//     }    
//     printf("\n");
// }

//     // for(i=0;i<r;i++)
//     //     for(j=0;j<c;j++)
//     //         if(*(m+i*c+j)!=0)
//     //             non0++;
//     // for(i=0;i<=non0;i++)
//     // trip=(int *)malloc(3 * non0 * sizeof(int));
// void find_triplet(int *m,int *trip,int non0,int r,int c)
// {
//     int i,j,k=1;
//     *(trip+0)=r;
//     *(trip+1)=c;
//     *(trip+2)=non0;
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//         {
//             if(*(m+i*c+j)!=0)
//             {
//                 // printf("%d",*(m+i*c+j));
//                 *(trip+k*3+0)=i;
//                 *(trip+k*3+1)=j;
//                 *(trip+k*3+2)=*(m+i*c+j);
//                 k++;
//             }
//         }
//     }
// }

// void sum(int *T1,int *T2,int *TS)
// {
//     int i=1,j=1,k=1;
//     // *(MT+2)=*(M+2);
//     // *MT=*(M+1);
//     // *(MT+1)=*M;
//     while(i<=*(T1+2) || j<=*(T2+2))
//         if(*(T1+i*3+0)==*(T2+j*3+0))    
//             if(*(T1+i*3+1)==*(T2+j*3+1))
//             {
//                 *(TS+k*3+0)=*(T1+i*3+0);
//                 *(TS+k*3+1)=*(T1+i*3+1);
//                 *(TS+k*3+2)=*(T1+i*3+2)+*(T2+j*3+2);
//                 k++;
//                 i++;
//                 j++;
//             }
//             else if(*(T1+i*3+1)<*(T2+j*3+1))
//             {
//                 *(TS+k*3+0)=*(T1+i*3+0);
//                 *(TS+k*3+1)=*(T1+i*3+1);
//                 *(TS+k*3+2)=*(T1+i*3+2);
//                 k++;
//                 i++;
//             }
//             else
//             {
//                 *(TS+k*3+0)=*(T2+j*3+0);
//                 *(TS+k*3+1)=*(T2+j*3+1);
//                 *(TS+k*3+2)=*(T2+j*3+2);
//                 k++;
//                 j++;
//             }
//         else if(*(T1+i*3+0)<*(T2+j*3+0))
//         {
//             *(TS+k*3+0)=*(T1+i*3+0);
//             *(TS+k*3+1)=*(T1+i*3+1);
//             *(TS+k*3+2)=*(T1+i*3+2);
//             k++;
//             i++;            
//         }
//         else
//         {
//             *(TS+k*3+0)=*(T2+j*3+0);
//             *(TS+k*3+1)=*(T2+j*3+1);
//             *(TS+k*3+2)=*(T2+j*3+2);
//             k++;
//             j++;
//         }
//     *(TS+0)=*(T1+0);
//     *(TS+1)=*(T1+1);
//     *(TS+2)=k-1;
// }

    // T2[0][0]=T1[0][0];
    // T2[0][1]=T1[0][1];
    // printf("Enter the #Non-zero in 1st spars : ");
    // scanf("%d",&n1);
    // printf("Enter the #Non-zero in 2st spars : ");
    // scanf("%d",&n2);
    // T1[0][2]=T2[0][2]=non0;
    // T1=(int *)malloc(r*c*sizeof(int));
    // T2=(int *)malloc(r*c*sizeof(int));
    // for(i=0;i<r;i++)
    // {
    //     *(S1+i)=(int *)malloc(c*sizeof(int));
    //     *(S2+i)=(int *)malloc(c*sizeof(int));
    // }
    // for(i=0;i<n1+1;i++)
    //     *(T1+i)=(int *)malloc(3*sizeof(int));
    // for(i=0;i<n2+1;i++)
    //     *(T2+i)=(int *)malloc(3*sizeof(int));
    
        
    

















// #include<stdio.h>
// #define non0 6
// // #define col 3

// void input(int *,int);
// void display(int *,int,int);
// void trans(int *,int *,int);


// void main()
// {
//     int T[non0+1][3],TT[3][non0+1];
//     printf("Enter the #Rows in spars : ");
//     scanf("%d",&T[0][0]);
//     printf("Enter the #Columns in spars : ");
//     scanf("%d",&T[0][1]);
//     // printf("Enter the #Non-zero in spars : ");
//     T[0][2]=non0;
//     printf("Enter the triplet : \n");
//     input(T,non0+1);
//     printf("The triplet is : \n");
//     display(T,non0+1,3);
//     trans(T,TT,non0+1);
//     printf("The triplet transpose is : \n");
//     display(TT,non0+1,3);

// }

// void input(int *M,int l)
// {
//     int i=0,j=0;
//     for(i=1;i<l;i++)
//         for(j=0;j<3;j++)
//             scanf("%d",M+i*3+j);
// }

// void display(int *M,int p,int q)
// {
//     int i=0,j=0;
//     for(i=0;i<p;i++)
//     {
//         for(j=0;j<q;j++)
//             printf("%d ",*(M+i*3+j));
//         printf("\n");
//     }    
//     printf("\n");
// }

// void trans(int *M,int *MT,int l)
// {
//     int i=0,j=0,k=1;
//     *(MT+2)=non0;
//     *MT=*(M+1);
//     *(MT+1)=*M;
//     for(i=0;i<*(M+1);i++)
//     {
//         for(j=0;j<l;j++)
//             if(*(M+j*3+1)==i)
//             {
//                 *(MT+k*3+0)=i;
//                 *(MT+k*3+1)=*(M+j*3+0);
//                 *(MT+k*3+2)=*(M+j*3+2);
//                 k++;
//             }
//     }    

// }


                
        
        
        
        
        
        
        //     printf("%d ",*(M+i*3+j));
        // printf("\n");












// #include<stdio.h>
// #define row 2
// #define col 4

// void input(int [][col]);
// void display(int *,int,int);
// void find_triplet(int [][col],int [][3]);
// void input_sprase(int [][col]);

// int count=0;
// int main()
// {
//      int mat[row][col],triplet[100][3];
 
//     printf("Enter the elements of the matrix :: \n");
//     input_sprase(mat);
//     printf("Sparse matrix is :\n");
//     display(mat,row,col);
//     find_triplet(mat,triplet);
//     printf("Triplet is :\n");
//     display(triplet,count+1,3);
//     return 0;
// } 
// void input_sprase(int m[][col])
// {
//     int i,j;
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
            
//             scanf("%d",&m[i][j]);
//             if(m[i][j]!=0)
//             {
//                 count++;
//             }
//         }
//     }
// }

// void find_triplet(int m[][col],int trip[][3])
// {
//     int i,j,k=1;
//     trip[0][0]=row;
//     trip[0][1]=col;
//     trip[0][2]=count;
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             if(m[i][j]!=0)
//             {
//                 trip[k][0]=i;
//                 trip[k][1]=j;
//                 trip[k][2]=m[i][j];
//                 k++;
//             }
//         }
//     }
// }

// void display(int *m,int r,int c)
// {
//     int i,j;
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//         {
//             printf("%d\t",*(m+i*c+j));
//         }
//         printf("\n");
//     }
// }

