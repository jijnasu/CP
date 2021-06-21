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
void add_rear(node *);

void main()
{
    node *start;
    int pos;
    // char ch;
    start=create();
    traverse(start);
    add_rear(start);
    traverse(start);
    
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
