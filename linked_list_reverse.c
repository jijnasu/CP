#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int info;
    struct NODE *next;
}node;



node* create();
void traverse(node *);
node* reverse_list(node *);

void main()
{
    node *start,*ptr,*reverse;
    char ch;
    start=create();
    traverse(start);
    // traverse(start);
    reverse=reverse_list(start);
    printf("After reversing the list :");
    traverse(reverse);
    
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

node* reverse_list(node *front)
{
    node *temp,*reverse;
    reverse=(node*)malloc(sizeof(node));
    reverse->info=front->info;
    reverse->next=NULL;
    front=front->next;
    while(front!=NULL)
    {
        temp=reverse;
        reverse=(node*)malloc(sizeof(node));
        reverse->info=front->info;
        reverse->next=temp;
        front=front->next;
    }
    
    return reverse;
}
