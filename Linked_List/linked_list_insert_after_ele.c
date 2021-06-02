#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int info;
    struct NODE *next;
}node;

void traverse(node *);
void insert_after_ele(node *start,node *ele,int val)
{
    int found=1;
    while(start->info != val)
        if(start->next == NULL)
        {
            found=0;
            break;
        }
        else
            start=start->next;
    if(found==1)
    {
            ele->next=start->next;
            start->next = ele;
    }
    else
        printf("Element not found...\n");
        
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
            printf("Enter element after which you want to add : ");
            scanf("%d",&val);
            // val--;
            ptr = (node*)malloc(sizeof(node));
            ptr->next = NULL;
            printf("Enter info. for new node : ");
            scanf("%d",&(ptr->info));
            insert_after_ele(start,ptr,val);
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


