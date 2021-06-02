#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int info;
    struct NODE *next;
}node;



node* create();
void traverse(node *);
void search(node *,int);
// node* reverse_list(node *);

void main()
{
    node *start,*ptr,*reverse;
    char ch;
    int val;
    start=create();
    traverse(start);
    printf("Enter the value to be searched : ");
    scanf("%d",&val);
    search(start,val);
    
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



void search(node *start,int val)
{
    int loc=0,flag=0;
    while(start!=NULL)
    {
        if(start->info == val)
        {
            flag=1;
            break;
        }
        loc++;
        start=start->next;
    }
    if(flag)
        printf("The element %d is at position %d ...\n",val,loc+1);
    else
        printf("Element not found...\n");
    
}
