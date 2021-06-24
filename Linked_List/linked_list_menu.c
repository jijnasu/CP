#include<stdio.h>
#include<stdlib.h>
struct NODE
{
    int info;
    struct NODE *next;
};
int count =1;
typedef struct NODE node;
node *create(node *);
node *del_first(node *);
node *reverse(node *);
void llsort(node *);
void del_last(node *);
void del_ith(node *,int);
void traverse(node *);
void insert_at_ith(node *,int );
void insert_after_ele(node *,int );
void insert_at_end(node *);
node * insert_at_beg(node *);
void main()
{
    int ele,i,opt;
    node *start;
    start=create(start);
    while(1)
    {
    printf("\nMENU\n1.traverse\n2.delete first node\n3.delete ith node\n4.delete last node\n5.insert\n6.reverse\n7.sort\n8.exit\nYOUR CHOICE::");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        traverse(start);
        break;
    case 2:
        start=del_first(start);
        break;
    case 3:
        printf("\nenter the ith position ");
        scanf("%d",&i);
        del_ith(start,i);
        break;
    case 4:
        del_last(start);
        break;
    case 5:
         printf("\nenter the ith location ");
         scanf("%d",&i);
         if(i==1)
         {
             start=insert_at_beg(start);
             traverse(start);
         }
         else if(i==count)
         {
             insert_at_end(start);
             traverse(start);
         }
         else if(i>count)
            printf("\nout of list limit size");
         else
         {
             insert_at_ith(start,i);
             traverse(start);
         }
         break;
    case 6:
        start=reverse(start);
        printf("\nthe linked list after reversing is\n");
        traverse(start);
        break;
    case 7:
        llsort(start);
        printf("\nthe linked list after sorting is\n");
        traverse(start);
        break;
    case 8:
        exit(0);
    default:
        printf("\nWRONG INPUT");
    }
    }
}
node *create(node *s)
{
    char ch='y';
    node *temp;
    s= (node *)malloc(sizeof(node));
    printf("\ninput the first element ");
    scanf("%d",&(s->info));

    temp = s;
    while(ch=='y')
    {
        temp->next = (node *)malloc(sizeof(node));
        temp=temp->next;
        printf("\ninput new node ");
        scanf("%d",&(temp->info));
        count++;
        printf("\nenter x to stop and y to enter more ");
        scanf(" %c",&ch);
    }
    temp->next=NULL;
    return s;
}
void traverse(node *ptr)
{
    printf("\nentered linked list is\n ");
    while(ptr!=NULL)
    {
        printf("%d\t",(ptr->info));
        ptr=ptr->next;
    }
    printf("\nthe no. of elements are %d",count);

}
node *del_first(node *s)
{
    node *temp;
    temp=s;
    s=s->next;
    free(temp);
    return s;

}
void del_last(node *s)
{
    node *p,*p1;
    p=s;
    while(p->next!=NULL)
    {
        p1=p;
        p=p->next;
    }
    p1->next=NULL;
    free(p);
}
void del_ith(node *s,int i)
{
    node *cur,*prev;
    int k;
    if(i > count)
    {
        printf("\nThe ith node not present in the list .");
        return;
    }
    cur = s;
    k = 1;
    while(k < i)
    {
        prev = cur;
        cur = cur->next;
        k++;

    }
    prev->next = cur->next;
    free(cur);
}
void insert_at_ith(node *s,int i)
{
    node *ptr,*new;
    ptr=s;
    int k=1;
    while(k<i)
    {
        ptr=ptr->next;
        k++;
    }
    new=(node *)malloc(sizeof(node));
    printf("\nenter a node for ith position");
    scanf("%d",&(new->info));
    new->next=ptr->next;
    ptr->next=new;
}
void insert_at_end(node *s)
    {
        node *new;
        new = (node*)malloc(sizeof(node));
        printf("\nInput new node to insert node at end  ");
        scanf("%d",&(new->info));
        new->next =NULL;
        while(s->next!=NULL)
            s=s->next;
        s->next=new;
        printf("\nNEW linked list is\n ");


    }
    node * insert_at_beg(node * s)
    {
        node *new;
        new = (node*)malloc(sizeof(node));
        printf("\nInput new node to insert node at beginning ");
        scanf("%d",&(new->info));
        new->next=s;
        s=new;
        return s;
        printf("\nNEW linked list is\n ");

    }
    node* reverse(node *s)
{
    node *temp,*curr,*pre;
    curr=s;
    pre=curr->next;
    curr->next=NULL;
    while(pre!=NULL)
    {
        temp=pre->next;
        pre->next=curr;
        curr=pre;
        pre=temp;
    }
    s=curr;
    return s;
}
void llsort(node *s)
{
    int min;
    node *curptr,*nextptr,*minptr;
    curptr=s;
    while(curptr->next!=NULL)
    {
        min=curptr->info;
        minptr=curptr;
        nextptr=curptr->next;
        while(nextptr!=NULL)
        {
            if(nextptr->info<min)
            {
                min=nextptr->info;
                minptr=nextptr;
            }
            nextptr=nextptr->next;
        }
        if(min!=curptr->info)
        {
            minptr->info=curptr->info;
            curptr->info=min;
        }
        curptr=curptr->next;
    }

}