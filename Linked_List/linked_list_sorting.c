#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int info;
    struct NODE *next;
}node;



node* create();
void traverse(node *);
void selection_sort(node *);

void main()
{
    node *start;
    start=create();
    traverse(start);
    selection_sort(start);
    printf("\nAfter sorting...");
    traverse(start);
    
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

void selection_sort(node *f)
{
    int min;
    node *i,*j;
    for(i=f;i->next!=NULL;i=i->next)
    {
        min=i->info;
        for(j=i->next;j!=NULL;j=j->next)
            if(j->info < min)
                min=j->info;
        if(min != i->info)
        {
            for(j=i->next;(j!=NULL) && (j->info != min);j=j->next);
            j->info=i->info;
            i->info=min;

        }
    }
}