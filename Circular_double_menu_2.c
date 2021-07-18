#include<stdio.h>
#include<stdlib.h>

int size;
typedef struct NODE
{
    int info;
    struct NODE *next;
    struct NODE *prev;
}node;



node* create();
void traverse(node *);
void add_front(node *);
node* add_rear(node *);
node* del_at_rear(node*);
node* del_at_front(node*);
void swap(int*,int*);
void bubblesort(node*);

void main()
{
    node *start=NULL,*last=NULL;
    int pos,val;
    char ch='y';
    while(ch=='y')
    {
        int opn;
        printf("\nMENU:\n01- Create\n02- Add at Front\n03- Add at Rear");
        printf("\n04- Delete at Front\n05- Delete at Rear\n06- Traverse");
        printf("\n07- Bubble Sort\n08- Exit\nSelect : ");
        scanf("%d",&opn);
        switch(opn)
        {
            case 1: last=create();
                    break;
            case 2: add_front(last);
                    break;
            case 3: last = add_rear(last);
                    break;
            case 4: last = del_at_front(last);
                    break;
            case 5: last = del_at_rear(last);
                    break;
            case 6: traverse(last);
                    break;
            case 7: bubblesort(last);
                    break;
            case 8: ch = 'n';
                    break;
            default:printf("Invalid input...");
        }

    }
    
    
}

void add_front(node *l)
{
    node *ptr=l->next;
    l->next = (node*)malloc(sizeof(node));
    l->next->prev = l;
    l = l->next;
    l->next = ptr;
    ptr->prev = l;
    printf("Enter the node : ");
    scanf("%d",&(l->info));
    size++;
}

node* add_rear(node *l)
{
    node *front = l->next;
    l->next = (node*)malloc(sizeof(node));
    l->next->prev = l;
    printf("Enter the node : ");
    scanf("%d",&(l->next->info));
    l->next->next=front;
    front->prev = l->next;
    size++;
    return l->next;
}

node* create()
{
    node *start,*ptr;
    char ch='y';
    ptr = start = (node*)malloc(sizeof(node));
    printf("Enter information for 1st node : ");
    scanf("%d",&(start->info));
    start->next = start;
    start->prev = start;
    size++;
    while(ch == 'y')
    {
        printf("Do you want to add node(y/n) : ");
        scanf(" %c",&ch);
        if(ch=='y')
        {
            ptr->next = (node*)malloc(sizeof(node));
            printf("Enter info. for new node : ");
            scanf("%d",&(ptr->next->info));
            ptr->next->prev = ptr;
            ptr = ptr->next;
            size++;
        }
        else
            ptr->next = start;
            start->prev = ptr;
    }
    return start->prev;
}

void traverse(node *last)
{
    if(size<=0)
        printf("List underflow...");
    else
    {
        node *start = last->next;
        printf("Size of Linked List : %d",size);
        if(start != NULL)
        {
            node *ptr=start;
            printf("\nThe linked list forward traverse : ");
            printf("%d  ",ptr->info);
            ptr = ptr->next;
            while(ptr != start)
            {
                printf("%d  ",ptr->info);
                ptr = ptr->next;
            }
            ptr = start->prev;
            printf("\nThe linked list in backward traverse : ");
            while(ptr != start)
            {
                printf("%d  ",ptr->info);
                ptr = ptr->prev;
            }
            printf("%d  ",ptr->info);
            
        }
    }
    printf("\n");
}


node* del_at_front(node *l)
{
    if(l==NULL)
    {
        printf("List underflow...");
        return NULL;
    }
    if(size==1)
    {
        size--;
        return NULL;
    }
    l->next = l->next->next;
    l->next->prev = l;
    size--;
    return l;
}

node* del_at_rear(node *l)
{
    if(l==NULL)
    {
        printf("List underflow...");
        return NULL;
    }
    if(size==1)
    {
        size--;
        return NULL;
    }
    l = l->prev;
    l->next = l->next->next;
    l->next->prev = l;
    size--;
    return l;
}


void swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void bubblesort(node *last)
{
    node *f=NULL;
    int i,j;
    for(i=1;i<=size;i++)
        for(j=0,f=last->next;j<size-i;j++,f = f->next)
            if(f->info > f->next->info)
                swap(&f->info,&f->next->info);
}