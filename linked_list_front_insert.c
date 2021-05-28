#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int info;
    struct NODE *next;
}node;

void traverse(node *);
node* front_insert(node *start,node *temp)
{
    (temp)->next = start;
    start = temp;
    return start;
}

void main()
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
        {
            ptr->next = NULL;
            break;
        }
    }
    traverse(start);
    printf("\n================================================\n");
    while(1)
    {
        printf("Do you want to insert node at front(y/n) : ");
        scanf(" %c",&ch);
        if(ch=='y')
        {
            ptr = (node*)malloc(sizeof(node));
            ptr->next = NULL;
            printf("Enter info. for new node : ");
            scanf("%d",&(ptr->info));
            start=front_insert(start,ptr);
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


