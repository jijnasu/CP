#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int info;
    struct NODE *next;
}node;

void traverse(node *);
node* insert_position(node *start,node *ele,int loc)
{
    int i=1;
    node *temp;
    if(loc==0)
    {
        (ele)->next = start;
        start = ele;
    }
    else
    {
        for(temp=start;i<loc;i++)
            if(temp->next != NULL)
                temp=temp->next;
            else
                break;
            ele->next=temp->next;
            temp->next = ele;
      
    }
    return start;
        
}

void main()
{
    node *start,*ptr;
    int loc;
    char ch='y';
    ptr = start = (node*)malloc(sizeof(node));
    printf("Enter information for 1st node : ");
    scanf("%d",&(start->info));
    start->next = NULL;
    while(1)
    {
        printf("Do you want to add node(y/n) : ");
        scanf(" %c",&ch);
        if(ch=='y')
        {
            ptr->next = (node*)malloc(sizeof(node));
            ptr = ptr->next;
            printf("Enter info. for new node : ");
            scanf("%d",&(ptr->info));
        }
        else
        {
            ptr->next = NULL;
            break;
        }
    }
    traverse(start);
    printf("\n================================================\n");
    while(1)
    {
        printf("Do you want to insert new node(y/n) : ");
        scanf(" %c",&ch);
        if(ch=='y')
        {
            printf("Enter position for new node : ");
            scanf("%d",&loc);
            ptr = (node*)malloc(sizeof(node));
            ptr->next = NULL;
            printf("Enter info. for new node : ");
            scanf("%d",&(ptr->info));
            start=insert_position(start,ptr,loc-1);
            traverse(start);
        }
        else
            break;
    }

    // traverse(start);
    
}

void traverse(node *start)
{
    printf("\nThe linked list is : ");
    while(start != NULL)
    {
        printf("%d  ",start->info);
        start = start->next;
    }
    printf("\n");
}


