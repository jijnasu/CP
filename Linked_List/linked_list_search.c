#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int info;
    struct NODE *next;
}node;

void traverse(node *);
void search(node *start,int val)
{
    int loc=-1;
    while(start->next!=NULL)
    {
        if(start->info == val)
        {
            loc++;
            break;
        }
        start=start->next;
    }
    if(loc>=0)
        printf("The element %d is at position %d ...",val,loc+1);
    else
        printf("Element not found...");
    
}


void main()
{
    node *start,*ptr;
    int val;
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
            printf("Enter value of node to be searched : ");
            scanf("%d",&val);
            search(start,val-1);
            // ptr = (node*)malloc(sizeof(node));
            // ptr->next = NULL;
            // printf("Enter info. for new node : ");
            // scanf("%d",&(ptr->info));
            // traverse(start);
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


