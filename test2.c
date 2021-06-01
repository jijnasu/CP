

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node nd;
nd* creat(nd*);
void display(nd*);
nd* binsert(nd*);
void einsert(nd*);
void insert(nd*,int);
void vinsert(nd*,int);
void search(nd*,int);

int main()
{
    nd *start=NULL,*temp;
    int ch,i,val,ele;
    while(1)
    {
        printf("\nCHOOSE MENU \n 1. Create a linked list \n 2. Traversal ");
        printf("\n 3. Insert an element at begin \n 4. Insert an element at end");
        printf("\n 5. Insert an element after ith node of list ");
        printf("\n 6. Insert a new node after a particular value of list ");
        printf("\n 7. Search an element from a list");
        printf("\n 8. Sort the nodes \n 9. Delete 1st node");
        printf("\n 10.Delete last node \n 11.");
        printf("\n>>>");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("New linked list\n");
            start=creat(start);
            break;
        case 2:
            printf("The list is::\n ");
            display(start);
            break;
        case 3:
            start=binsert(start);
            break;
        case 4:
            einsert(start);
            break;
        case 5:
            printf("\nInput i :: ");
            scanf("%d",&i);
            insert(start,i);
            break;
        case 6:
            printf("\nInput value :: ");
            scanf("%d",&val);
            vinsert(start,val);
            break;
        case 7:
            printf("\nInput element :: ");
            scanf("%d",&ele);
            search(start,ele);
        }
    }
    return 0;
}

nd* creat(nd *start)
{
    nd *temp;
    if(start==NULL)
    {
        start=(nd*)malloc(sizeof(nd));
        printf("Input data to 1st node:: ");
        scanf("%d",&(start->info));
    }
    temp=start;
    char ch='y';
    while(ch=='y')
    {
        temp->next=(nd*)malloc(sizeof(nd));
        temp=temp->next;
        printf("Input new node:: ");
        scanf("%d",&(temp->info));
        printf("Enter 'y' to continue and 'n' to stop:: ");
        scanf(" %c",&ch);
    }
    temp->next=NULL;
    return start;
}

void display(nd *start)
{
    nd *ptr;
    ptr=start;
    //printf("The list is::\n ");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
    printf("\n");
}

nd* binsert(nd *s)
{
    nd *new;
    new=(nd*)malloc(sizeof(nd));
    printf("\nNew 1st node:: ");
    scanf("%d",&(new->info));
    new->next=s;
    s=new;
    return s;
}

void einsert(nd *s)
{
    nd *new,*temp;
    temp=s;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    new=(nd*)malloc(sizeof(nd));
    new->next=NULL;
    printf("\nInput last node:: ");
    scanf("%d",&(new->info));
    temp->next=new;
}

void insert(nd *s, int i)
{
    nd *new,*ptr;
    int k;
    k=1;
    ptr=s;
    while(k<i)
    {
        ptr=ptr->next;
        k++;
    }
    new=(nd*)malloc(sizeof(nd));
    printf("\nNew node:: ");
    scanf("%d",&(new->info));
    new->next=ptr->next;
    ptr->next=new;
}

void vinsert(nd *s,int val)
{
    nd *temp,*new;
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
    new=(nd*)malloc(sizeof(nd));
    printf("New node:: ");
    scanf("%d",&(new->info));
    if(temp!=NULL)
    {
        new->next=temp->next;
        temp->next=new;
    }
    else
    {
        printf("The node is not present .\n");
    }
}

void search(nd *start,int ele)
{
    nd *ptr;
    ptr=start;
    int flag;
    while(ptr!=NULL)
    {
        if(ptr->info==ele)
        {
            flag=1;
            break;
        }
        else
        {
            ptr=ptr->next;
        }
    }
    if(flag==1)
    {
        printf("Element is present.\n");
    }
    else
    {
        printf("Element is absent.\n");
    }
}


// #include<stdio.h>
// #include<stdlib.h>

// typedef struct NODE
// {
//     // float x;
//     int info[10];
//     char *a;
//     // double dd;
//     // char cj;
//     // double ddd;
//     // int xx;
// }node;

// void main()
// {

//     node ptr;
//     ptr.a="jhvjkh";
//     // printf("%d",sizeof(ptr));
//     printf("%s",ptr.a);
// }













// #include<stdio.h>
// #include<stdlib.h>

// typedef struct NODE
// {
//     int info;
//     struct NODE *next;
// }node;

// void traverse(node *);
// void front_insert(node **start,node **temp)
// {
//     (*temp)->next = *start;
//     *start = *temp;
// }

// void main()
// {
//     node *start,*ptr;
//     char ch='y';
//     ptr = start = (node*)malloc(sizeof(node));
//     printf("Enter information for 1st node : ");
//     scanf("%d",&(start->info));
//     start->next = NULL;
//     while(1)
//     {
//         printf("Do you want to add node(y/n) : ");
//         scanf(" %c",&ch);
//         if(ch=='y')
//         {
//             ptr->next = (node*)malloc(sizeof(node));
//             ptr = ptr->next;
//             printf("Enter info. for new node : ");
//             scanf("%d",&(ptr->info));
//         }
//         else
//         {
//             ptr->next = NULL;
//             break;
//         }
//     }
//     traverse(start);
//     printf("\n================================================\n");
//     while(1)
//     {
//         printf("Do you want to insert node at front(y/n) : ");
//         scanf(" %c",&ch);
//         if(ch=='y')
//         {
//             ptr = (node*)malloc(sizeof(node));
//             ptr->next = NULL;
//             printf("Enter info. for new node : ");
//             scanf("%d",&(ptr->info));
//             front_insert(&start,&ptr);
//         }
//         else
//             break;
//     }

//     traverse(start);
    
// }

// void traverse(node *start)
// {
//     printf("\nThe linked list is : ");
//     while(start != NULL)
//     {
//         printf("%d  ",start->info);
//         start = start->next;
//     }

// }









// #include<stdio.h>


// void temp(int **x,*y,z)
// {
    
// }


// void main()
// {
//     int **x,*y,z;
//     y=z;
//     z=22;
//     temp(x,y,z);
//     // printf("***%d\n",**x);
//     printf("***%d\n",*y);
//     printf("***%d\n",z);
// }









// #include<stdio.h>
// struct NODE
// {
//     int info;
//     struct NODE *next;
// };
// typedef struct NODE node;
// void main()
// {
//     node *start,*temp,*ptr;
//     printf("enter the first node ");
//     start= (node *)malloc(sizeof(node));
//     scanf("%d",&(start->info));
//     char ch='y';
//     temp=start;
//     while(ch=='y')
//     {
//         temp->next= (node *)malloc(sizeof(node));
//         temp= temp->next;
//         printf("\nenter another node ");
//         scanf("%d",&(temp->info));
//         printf("\nenter X to stop entering nodes and y to enter new node :: ");
//         scanf(" %c",&ch);
//     }
//     temp->next= NULL;
//     ptr=start;
//     printf("\nentered linked list is\n ");
//     while(ptr!=NULL)
//     {
//         printf("%d\t",(ptr->info));
//         ptr=ptr->next;
//     }

// }





// #include<stdio.h>
// #define size 5

// void enqueue(int *,int *,int *,int);
// int dequeue(int *,int *,int *);
// void traversal(int *,int,int);

// void main()
// {
//     int queue[size],front=-1,rear=-1,ele,del,opn=0;
//     while(opn!=4)
//     {
//         printf("\nMENU:\n01. Enqueqe\n02. Dequeue\n03. Traverse\n04. Exit\nChoose an option...");
//         scanf("%d",&opn);
//         switch(opn)
//         {
//             case 1: if(rear<size-1)
//                     {
//                     printf("Enter an element to push : ");
//                     scanf("%d",&ele);
//                     enqueue(queue,&front,&rear,ele);
//                     }
//                     else
//                         printf("Queue overflow...");
//                     break;
                        
//             case 2: if((front)<=(rear) && rear>=0)
//                     {
//                         del=dequeue(queue,&front,&rear);
//                         printf("The poped element is : %d",del);
//                     }
//                     else 
//                         printf("Queue underflow...");
//                     break;

//             case 3: traversal(queue,front,rear);
//                     break;
            
//             case 4: break;

//             default:printf("Wrong input...Please retry...");

//         }
//     }
//     printf("Program exited...");

// }


// void enqueue(int *q,int *f,int *r,int ele)
// {
//     if(*f<=0)
//         (*f)=0;
//     q[++(*r)]=ele;
// }

// int dequeue(int *q,int *f,int *r)
// {
//     int temp=(*f)++;
//     if((*f)>(*r))
//         (*f)=(*r)=-1;
//     return q[temp];

// }

// void traversal(int *q,int f,int r)
// {
//     if(r<0)
//         printf("Empty Queue...");
//     else
//     {
//         printf("The Queqe is : ");
//         for(;f<=r;f++)
//             printf("%d  ",q[f]);
//     }
        
// }






// #include<stdio.h>
// #include<stdlib.h>

// int input(int **,int,int);
// void display(int **,int,int);
// void find_triplet(int **,int **,int,int,int);
// void test(int **a,int **b,int r,int c)
// {
//     for(int i=0;i<r;i++)
//         for(int j=0;j<c;j++)
//             printf("%d\n",a[i][j]==b[i][j]);
// }

// void main()
// {
//     int **S1,**S2,**T,r,c,non0,i;
//     printf("Enter #rows & #columns : ");
//     scanf("%d%d",&r,&c);
//     S1=(int**)malloc(r*sizeof(int*));
//     for(i=0;i<r;i++)
//         S1[i]=(int*)malloc(c*sizeof(int));
//     printf("Enter spars : \n");
//     non0=input(S1,r,c);
//     printf("The Spars is : \n");
//     display(S1,r,c);
//     S2=(int**)malloc(r*sizeof(int*));
//     for(i=0;i<r;i++)
//         S2[i]=(int*)malloc(c*sizeof(int));
//     printf("Enter spars : \n");
//     non0=input(S2,r,c);
//     printf("The Spars is : \n");
//     display(S2,r,c);
//     test(S1,S2,r,c);
// //     T=(int**)malloc((non0+1)*sizeof(int*));
// //     for(i=0;i<non0+1;i++)
// //         T[i]=(int*)malloc(3*sizeof(int));
// //     find_triplet(S,T,r,c,non0);
// //     printf("The Triplet is : \n");
// //     display(T,non0+1,3);
// // }
// }


// int input(int **m,int r,int c)
// {
//     int i,j,non0=0;
//     for(i=0;i<r;i++)
//         for(j=0;j<c;j++)
//         {
//             scanf("%d",&m[i][j]);
//             if(m[i][j]!=0)
//                 non0++;
//         }
//     return non0;
// }

// void display(int **m,int r,int c)
// {
//     int i,j;
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//             printf("%d ",m[i][j]);
//         printf("\n");
//     }
// }

// void find_triplet(int **m,int **t,int r,int c,int non0)
// {
//     int i,j,k=1;
//     t[0][0]=r;
//     t[0][1]=c;
//     t[0][2]=non0;
//     for(i=0;i<r;i++)
//         for(j=0;j<c;j++)
//             if(m[i][j]!=0)
//             {
//                 t[k][0]=i;
//                 t[k][1]=j;
//                 t[k][2]=m[i][j];
//                 k++;
//             }
// }







// #include<stdio.h>
// #include<stdlib.h>
// void display(int *a,int r,int c)
// {
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//             printf("%d ",*(a+i*c+j));
//         printf("\n");
//     }
//     // *(a+2)=99;
//     // a[1][1]=55;
// }

// void test(int *a)
// {
//     a=(int *)malloc(9 * sizeof(int));
//     for(int i=0;i<3;i++)
//         for(int j=0;j<3;j++)
//             scanf("%d",a+i*3+j);
// }


// void main()
// {
//     int *m,*aa,r,c,i=0,j=0;
//     printf("Enter r & c :");
//     scanf("%d%d",&r,&c);
//     m=(int *)malloc(r * c * sizeof(int));
//     // m=(int **)malloc(r * sizeof(int *));
//     // for(i=0;i<r;i++)
//     //     m[i]=(int *)malloc(c * sizeof(int));
//     printf("Enter matrix : ");
//     for(i=0;i<r;i++)
//         for(j=0;j<c;j++)
//             // scanf("%d",&m[i][j]);
//             scanf("%d",m+i*c+j);
//     printf("Matrix : \n");
//     display(m,r,c);
//     display(m,r,c);
//     printf("Enter matrix : ");
//     test(aa);
//     printf("Matrix : \n");
//     display(aa,3,3);

//     free(m);
//     printf("%d",m==NULL);
// }















// //WAP to find and print triplet representation of sparse matrix
// #include<stdio.h>
// #define row 2
// #define col 5
// void Input(int[][col]);
// void Display(int [][col],int,int);
// void Find_Transpose(int [][col],int [][3]); 
// void Display_Trip(int [][3],int,int);
// int count=0;
// int main()
// {
//     int SPARSE[row][col],TRIP[100][3];
//     printf("\n Enter the Elements:\n");
//     Input(SPARSE);
//     printf("\n Elements Of Sparse Matrix:\n");
//     Display(SPARSE,row,col);
//     Find_Transpose(SPARSE,TRIP);
//     printf("\n Elements of Triplet: \n");
//     Display_Trip(TRIP,count+1,3);
// }
// void Input(int m[][col])
// {
//     int i,j;
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             scanf("%d",&m[i][j]);
//             if(m[i][j]!=0)
//                 count++;
//         }
//     }
// }
// void Display(int m[][col],int r,int c)
// {
//     int i,j;
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//             printf("%d\t",m[i][j]);
//         printf("\n");
//     }
// }
// void Find_Transpose(int m[][col],int TRIP[][3])
// {
//     int i,j,k=1;
//     TRIP[0][0]=row;
//     TRIP[0][1]=col;
//     TRIP[0][2]=count;
//     for(i=0;i<col;i++)
//     {
//         for(j=1;j<count;j++)
//         {
//             if(m[j][1]==i)
//             {
//                 TRIP[k][0]=i;
//                 TRIP[k][1]=j;
//                 TRIP[k][2]=m[i][j];
//                 k++;
//             }
//         }
//     }
// }
// void Display_Trip(int TRIP[][3],int r,int c)
// {
//     int i,j;
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//             printf("%d\t",TRIP[i][j]);
//         printf("\n");
//     }
// }






// // Displaying sparse matrix & its triplet matrix //
// #include<stdio.h>
// #define row 4
// #define col 5
// void input_sparse(int [][col]);
// void display(int [][col],int,int);
// void find_triplet(int [][col],int [][3]);
// int count=0;
// int main()
// {
//     int mat[row][col],triplet[100][3];
//     printf("Enter the elements of the matrix :: \n");
//     input_sparse(mat);
//     printf("elements of sparse matrix\n");
//     display(mat,row,col);
//     find_triplet(mat,triplet);
//     printf("elements of triplet\n");
//     display(triplet,count+1,3);
//     return 0;
// }
// void input_sparse(int m[][col])
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

// void display(int m[][col],int r,int c)
// {
//     int i,j;
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//         {
//             printf("%d\t",m[i][j]);
//         }
//         printf("\n");
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







// // #include<stdio.h>
// // #define c 2
// // #define n 2
// // #define m 4
// // void disply(int *a,int p,int q)
// // {
// //     for(int i=0;i<p;i++)
// //     {
// //         for(int j=0;j<q;j++)
// //             printf("%d  ",*(a+i*q+j));
// //         printf("\n");
// //     }
// // }


// // void main()
// // {
// //     int a[n][m],i,j;
// //     printf("Enter(%d,%d) : \n",n,m);
// //     for(i=0;i<n;i++)
// //         for(j=0;j<m;j++)
// //             scanf("%d",&a[i][j]);
// //     printf("display\n");
// //     disply(a,n,m);
// // }