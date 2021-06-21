#include<stdio.h>
#include<stdlib.h>

int size;
typedef struct NODE
{
    int info;
    struct NODE *next;
    struct NODE *prev;
}node;



node* create();
void traverse(node *);
node* add_front(node *);
void add_rear(node *);
node* add_at_ith(node *,int);

void main()
{
    node *start;
    int pos;
    char ch='y';
    start=create();
    traverse(start);
    while(ch=='y')
    {
        printf("Enter location to insert : ");
        scanf("%d",&pos);
        if(pos>=0 && pos<=size)
        {
            start = add_at_ith(start,pos);
            traverse(start);
        }
        else
            printf("Invalid location...");
        printf("Do you again want to insert : ");
        scanf(" %c",&ch);

    }
    
    
}


node* add_at_ith(node *f,int pos)
{
    if(pos == 0)
        return add_front(f);
    if(pos == size)
    {
        add_rear(f);
        return f;
    }
    
    int i=1;
    while(f->next!=NULL && i++<pos)
        f=f->next;
    node *start=f,*temp=f->next;
    f->next = (node*)malloc(sizeof(node));
    printf("Enter the node : ");
    scanf("%d",&(f->next->info));
    f->next->next=temp;
    f->next->prev = f;
    temp->prev=f->next;
    size++;
    return start;
    
}

node* add_front(node *f)
{
    node *ptr;
    ptr = (node*)malloc(sizeof(node));
    printf("Enter the node : ");
    scanf("%d",&(ptr->info));
    ptr->next=f;
    ptr->prev=NULL;
    f->prev = ptr;
    size++;
    return ptr;
}

void add_rear(node *f)
{
    while(f->next!=NULL)
        f=f->next;
    f->next = (node*)malloc(sizeof(node));
    printf("Enter the node : ");
    scanf("%d",&(f->next->info));
    f->next->next=NULL;
    f->next->prev = f;
    size++;
}

node* create()
{
    node *start,*ptr;
    char ch='y';
    ptr = start = (node*)malloc(sizeof(node));
    printf("Enter information for 1st node : ");
    scanf("%d",&(start->info));
    start->next = NULL;
    start->prev = NULL;
    size++;
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
            size++;
        }
        else
            break;
    }
    ptr->next = NULL;
    return start;
}

void traverse(node *start)
{
    printf("Size of Linked List : %d",size);
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
