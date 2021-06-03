#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int info;
    struct NODE *next;
}node;



node* create();
node* insert_ith(node *,node *,int);
void insert_after_ele(node *,node *,int);
node* delete_ith(node **,int *,int);
void traverse(node *);
void search(node *,int);
node* reverse_list(node *);
node* merge(node *,node *);
void selection_sort(node *);

















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

node* insert_ith(node *start,node *ele,int loc)
{
    int i=1;
    node *temp;
    if(loc==0)
    {
        (ele)->next = start;
        start = ele;
    }
    else
    {
        for(temp=start;i<loc;i++)
            if(temp->next != NULL)
                temp=temp->next;
            else
                break;
            ele->next=temp->next;
            temp->next = ele;
      
    }
    return start;
        
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

node* merge(node *s1,node *s2)
{
    node *start,*s;
    s=(node*)malloc(sizeof(node));
    start=s;
    while(s1!=NULL && s2!=NULL)
    {
        if(s1->info < s2->info)
        {
            s->info = s1->info;
            s1=s1->next;
        }
        else
        {
            s->info = s2->info;
            s2=s2->next;
        }
        s->next=(node*)malloc(sizeof(node));
        s=s->next;
    }
    while(s1)
    {
        s->info = s1->info;
        s1=s1->next;
        if(s1!=NULL)
        {
            s->next=(node*)malloc(sizeof(node));
            s=s->next;
        }
    }
    while(s2)
    {
        s->info = s2->info;
        s2=s2->next;
        if(s2!=NULL)
        {
            s->next=(node*)malloc(sizeof(node));
            s=s->next;
        }
    }
    s->next=NULL;
    return start;
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
