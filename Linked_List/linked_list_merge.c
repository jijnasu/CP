#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int info;
    struct NODE *next;
}node;



node* create();
void traverse(node *);
node* merge(node *,node *);
void insertion_sort(node *);

void main()
{
    node *start1,*start2,*merges;
    start1=create();
    insertion_sort(start1);
    traverse(start1);
    start2=create();
    insertion_sort(start2);
    traverse(start2);
    merges=merge(start1,start2);
    printf("After mearging...");
    traverse(merges);   
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


void insertion_sort(node *f)
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