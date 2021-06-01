#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int info;
    struct NODE *next;
}node;



node* create(int *);
void traverse(node *);
node* delete_ith(node **,int *,int);

void main()
{
    node *start,*ptr;
    int size=0,pos;
    char ch;
    start=create(&size);
    while(1)
    {
        traverse(start);
        printf("Do want to delete a node : ");
        scanf(" %c",&ch);
        if(ch=='y')
        {
            printf("Enter psition to delete : ");
            scanf("%d",&pos);

            if(pos<=size)
            {
                ptr=delete_ith(&start,&size,pos);
                printf("Deleted node is : %d",ptr->info);
            }    
            else
            {
                printf("Position out of range...");
                break;
            }
        }
        else
            break;
    }
    
    
}


node* create(int *size)
{
    node *start,*ptr;
    char ch='y';
    ptr = start = (node*)malloc(sizeof(node));
    printf("Enter information for 1st node : ");
    scanf("%d",&(start->info));
    start->next = NULL;
    (*size)++;
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
            (*size)++;
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

node* delete_ith(node **front,int *size,int pos)
{
    node *temp=*front,*del;
    int i=0;
    if(pos!=1)
    {
        for(;i<pos-2;i++)
            temp=temp->next;
        del=(temp->next);
        temp->next=(temp->next)->next;
    }
    else
    {
        del=*front;
        *front=(*front)->next;
    }
        
    (*size)--;
    return del;
}
