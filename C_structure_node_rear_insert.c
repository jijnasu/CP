#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int info;
    struct NODE *next;
}node;

void traverse(node *);
void rear_insert(node **rear,node **temp)
{
    (*rear)->next = *temp;
    (*rear) = (*rear)->next;
    // *start = *temp;
}

void main()
{
    node *start,*ptr,*rear;
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
            rear=ptr;
            break;
        }
    }
    traverse(start);
    printf("\n================================================\n");
    while(1)
    {
        printf("Do you want to insert node at rear(y/n) : ");
        scanf(" %c",&ch);
        if(ch=='y')
        {
            ptr = (node*)malloc(sizeof(node));
            printf("Enter info. for new node : ");
            scanf("%d",&(ptr->info));
            ptr->next = NULL;
            rear_insert(&rear,&ptr);
        }
        else
            break;
    }

    traverse(start);
    
}

void traverse(node *start)
{
    printf("\nThe linked list is : ");
    while(start != NULL)
    {
        printf("%d  ",start->info);
        start = start->next;
    }

}


