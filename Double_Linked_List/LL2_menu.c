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
node* add_front(node *);
void add_rear(node *);
node* add_at_ith(node *,int);
void add_after_node(node *f,int val)
{
    while(f->info!=val)
        f = f->next;
    if(f->next==NULL)
        add_rear(f);
    else
    {
        node *temp = (node*)malloc(sizeof(node));
        printf("Enter the value of the node : ");
        scanf("%d",&(temp->info));
        temp->next = f->next;
        temp->prev = f;
        f->next = temp;
        temp->next->prev = temp;
        size++;
    }
}

node* del_at_front(node *f)
{
    f->next->prev=NULL;
    size--;
    return f->next;
}

node* del_at_rear(node *f)
{
    size--;
    if(f->next==NULL)
        return NULL;
    while(f->next->next)
        f = f->next;
    f->next = NULL;
    return f;
}

node* del_ith_node(node *f,int loc)
{
    if(loc==0)
        return del_at_front(f);
    if(loc==size-1)
        del_at_rear(f);
    else
    {
        node *temp = f;
        while(loc-1)
        {
            temp = temp->next;
            loc--;
        }
        temp->next = temp->next->next;
        temp->next->prev = temp;
        size--;
    }
    return f;
}

node* del_val_node(node *f,int val)
{
    if(f->info == val)
    {
        f->next->prev = NULL;
        size--;
        return f->next;
    }
    node *start = f;
    while(f->next!=NULL && f->next->info!=val)
        f=f->next;
    if(f->next->next)
    {
        f->next = f->next->next;
        f->next->prev = f;
        size--;
    }
    else
        del_at_rear(f);
    return start;
    
}

node* reverse(node *f)
{
    int i=0,*temp = (int*)malloc(size * sizeof(int));
    node *ptr=f;

    while(ptr)
    {
        temp[i++]=ptr->info;
        ptr = ptr->next;
    }
    ptr = f;
    while(ptr)
    {
        ptr->info = temp[--i];
        ptr = ptr->next;
    }
    return f;

    
}
void main()
{
    node *start=NULL;
    int pos,val;
    char ch='y';
    traverse(start);
    while(ch=='y')
    {
        int opn;
        printf("\nMENU:\n01- Create\n02- Add at Front\n03- Add at Rear\n04- Add at ith node\n05- Add after an Element");
        printf("\n06- Delete at Front\n07- Delete at Rear\n08- Delete at ith\n09- Delete node with a value\n10- Traverse");
        printf("\n11- Reverse\n12- Exit\nSelect : ");
        scanf("%d",&opn);
        switch(opn)
        {
            case 1: start=create();
                    break;
            case 2: start = add_front(start);
                    break;
            case 3: add_rear(start);
                    break;
            case 4: printf("Enter the position : ");
                    scanf("%d",&pos);
                    start = add_at_ith(start,pos-1);
                    break;
            case 5: printf("Enter the value : ");
                    scanf("%d",&val);
                    add_after_node(start,val);
                    break;
            case 6: start = del_at_front(start);
                    break;
            case 7: del_at_rear(start);
                    break;
            case 8: printf("Enter the position : ");
                    scanf("%d",&pos);
                    start = del_ith_node(start,pos-1);
                    break;
            case 9: printf("Enter the value to be deleted : ");
                    scanf("%d",&val);
                    start = del_val_node(start,val);
                    break;
            case 10:traverse(start);
                    break;
            case 11:start = reverse(start);
                    break;
            case 12:ch = 'n';
                    break;
            default:printf("Invalid input...");
        }

    }
    
    
}

node* add_at_ith(node *f,int pos)
{
    if(pos == 0)
        return add_front(f);
    if(pos == size)
    {
        add_rear(f);
        return f;
    }
    
    int i=1;
    while(f->next!=NULL && i++<pos)
        f=f->next;
    node *start=f,*temp=f->next;
    f->next = (node*)malloc(sizeof(node));
    printf("Enter the node : ");
    scanf("%d",&(f->next->info));
    f->next->next=temp;
    f->next->prev = f;
    temp->prev=f->next;
    size++;
    return start;
    
}

node* add_front(node *f)
{
    node *ptr;
    ptr = (node*)malloc(sizeof(node));
    printf("Enter the node : ");
    scanf("%d",&(ptr->info));
    ptr->next=f;
    ptr->prev=NULL;
    f->prev = ptr;
    size++;
    return ptr;
}

void add_rear(node *f)
{
    while(f->next!=NULL)
        f=f->next;
    f->next = (node*)malloc(sizeof(node));
    printf("Enter the node : ");
    scanf("%d",&(f->next->info));
    f->next->next=NULL;
    f->next->prev = f;
    size++;
}

node* create()
{
    node *start,*ptr;
    char ch='y';
    ptr = start = (node*)malloc(sizeof(node));
    printf("Enter information for 1st node : ");
    scanf("%d",&(start->info));
    start->next = NULL;
    start->prev = NULL;
    size++;
    while(1)
    {
        printf("Do you want to add node(y/n) : ");
        scanf(" %c",&ch);
        if(ch=='y')
        {
            ptr->next = (node*)malloc(sizeof(node));
            printf("Enter info. for new node : ");
            scanf("%d",&(ptr->next->info));
            ptr->next->prev=ptr;
            ptr = ptr->next;
            size++;
        }
        else
            break;
    }
    ptr->next = NULL;
    return start;
}

void traverse(node *start)
{
    printf("Size of Linked List : %d",size);
    node *end;
    if(start != NULL)
    {
        printf("\nThe linked list in forward traverse : ");
        while(start != NULL)
        {
            printf("%d  ",start->info);
            end = start;
            start = start->next;
        }
        printf("\nThe linked list in backward traverse : ");
        while(end != NULL)
        {
            printf("%d  ",end->info);
            end = end->prev;
        }
        
    }
    printf("\n");
}
