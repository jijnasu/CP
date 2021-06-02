#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int info;
    struct NODE *next;
}node;



node* create();
void traverse(node *);
void merge(node *,node *);

void main()
{
    node *start1,*start2,*ptr,*reverse;
    // char ch;
    start1=create();
    traverse(start1);
    start2=create();
    traverse(start2);
    // traverse(start);
    merge(start1,start2);
    printf("After mearging...");
    traverse(start1);
    
}


node* create()
{
    node *start,*ptr;
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
            break;
    }
    ptr->next = NULL;
    return start;
}

void traverse(node *start)
{
    if(start != NULL)
    {
        printf("\nThe linked list is : ");
        while(start != NULL)
        {
            printf("%d  ",start->info);
            start = start->next;
        }
    }
    printf("\n");
}

void merge(node *s1,node *s2)
{
    while(s1->next!=NULL)
        s1=s1->next;
    s1->next=s2;
}
