#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int info;
    struct NODE *next;
    struct NODE *prev;
}node;



node* create(int *);
void traverse(node *);
node* add_front(node *,int *);

void main()
{
    node *start,*ptr;
    int size=0,pos;
    // char ch;
    start=create(&size);
    printf("Size of Linked List : %d",size);
    traverse(start);
    start=add_front(start,&size);
    printf("Size of Linked List : %d",size);
    traverse(start);
    
}


node* add_front(node *f,int *size)
{
    node *ptr=f;
    ptr = (node*)malloc(sizeof(node));
    printf("Enter the node : ");
    scanf("%d",&(ptr->info));
    ptr->next=f;
    ptr->prev=NULL;
    ptr->next->prev = ptr;
    (*size)++;
    return ptr;
}

node* create(int *size)
{
    node *start,*ptr;
    char ch='y';
    ptr = start = (node*)malloc(sizeof(node));
    printf("Enter information for 1st node : ");
    scanf("%d",&(start->info));
    start->next = NULL;
    start->prev = NULL;
    (*size)++;
    while(1)
    {
        printf("Do you want to add node(y/n) : ");
        scanf(" %c",&ch);
        if(ch=='y')
        {
            ptr->next = (node*)malloc(sizeof(node));
            printf("Enter info. for new node : ");
            scanf("%d",&(ptr->next->info));
            ptr->next->prev=ptr;
            ptr = ptr->next;
            (*size)++;
        }
        else
            break;
    }
    ptr->next = NULL;
    return start;
}

void traverse(node *start)
{
    node *end;
    if(start != NULL)
    {
        printf("\nThe linked list in forward traverse : ");
        while(start != NULL)
        {
            printf("%d  ",start->info);
            end = start;
            start = start->next;
        }
        printf("\nThe linked list in backward traverse : ");
        while(end != NULL)
        {
            printf("%d  ",end->info);
            end = end->prev;
        }
        
    }
    printf("\n");
}
