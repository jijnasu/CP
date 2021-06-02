#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int info;
    struct NODE *next;
}node;



node* create();
void traverse(node *);
node* delete_front(node **);

void main()
{
    node *start,*ptr;
    char ch;
    start=create();
    while(1)
    {
        traverse(start);
        printf("Do want to delete the 1st node : ");
        scanf(" %c",&ch);
        if(ch=='y')
        {
            if(start!=NULL)
            {
                ptr=delete_front(&start);
                printf("Deleted node is : %d",ptr->info);
            }    
            else
            {
                printf("List Underflow...");
                break;
            }
        }
        else
            break;
    }
    
    
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
    // else
        // printf("List underflow...");
    
    printf("\n");
}

node* delete_front(node **front)
{
    node *temp=*front;
    *front=(*front)->next;
    return temp;
}
