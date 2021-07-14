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
node* reverse(node *f);
node* del_val_node(node*,int);
node* del_ith_node(node*,int);
node* del_at_rear(node*);
node* del_at_front(node*);
void add_after_node(node*,int);

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
            case 7: start = del_at_rear(start);
                    break;
            case 8: printf("Enter the position : ");
                    scanf("%d",&pos);
                    start = del_ith_node(start,pos-1);
                    break;
            case 9: if(size<=0)
                        printf("List underflow...");
                    else
                    {
                        printf("Enter the value to be deleted : ");
                        scanf("%d",&val);
                        start = del_val_node(start,val);
                    }
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
    if(pos>0 && pos<size)
    {
        node *front = f;
        int i=1;
        while(f->next!=front && i++<pos)
            f=f->next;
        node *temp=f->next;
        f->next = (node*)malloc(sizeof(node));
        printf("Enter the node : ");
        scanf("%d",&(f->next->info));
        f->next->next=temp;
        size++;
        return front;
    }
    else
        printf("Index out of range...");
    
}

node* add_front(node *f)
{
    node *ptr=f;
    while(ptr->next!=f)
        ptr = ptr->next;
    ptr->next = (node*)malloc(sizeof(node));
    ptr = ptr->next;
    printf("Enter the node : ");
    scanf("%d",&(ptr->info));
    ptr->next=f;
    size++;
    return ptr;
}

void add_rear(node *f)
{
    node *front = f;
    while(f->next!=front)
        f=f->next;
    f->next = (node*)malloc(sizeof(node));
    printf("Enter the node : ");
    scanf("%d",&(f->next->info));
    f->next->next=front;
    size++;
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
    }
    return start;
}

void traverse(node *start)
{
    printf("Size of Linked List : %d",size);
    if(start != NULL)
    {
        node *ptr=start;
        printf("\nThe linked list is : ");
        printf("%d  ",ptr->info);
        ptr = ptr->next;
        while(ptr != start)
        {
            printf("%d  ",ptr->info);
            ptr = ptr->next;
        }
    }
    printf("\n");
}




void add_after_node(node *f,int val)
{
    node *start = f;
    while(f->info!=val && f->next!=start)
        f = f->next;
    if(f->info!=val && f->next==start)
        printf("Value not found...");
    else
    {
        node *temp = f->next;
        f->next = (node*)malloc(sizeof(node));
        f = f->next;
        printf("Enter the value of the node : ");
        scanf("%d",&(f->info));
        f->next = temp;
        size++;
    }
}

node* del_at_front(node *f)
{
    if(f==NULL)
    {
        printf("List underflow...");
        return NULL;
    }
    if(size==1)
    {
        size--;
        return NULL;
    }
    node *start = f;
    while(f->next!=start)
        f = f->next;
    f->next = start->next;
    size--;
    return start->next;
}

node* del_at_rear(node *f)
{
    if(f==NULL)
    {
        printf("List underflow...");
        return NULL;
    }
    if(size==1)
    {
        size--;
        return NULL;
    }
    node *front = f;
    while(f->next->next!=front)
        f = f->next;
    size--;
    f->next = front;
    return front;
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
        size--;
    }
    return f;
}

node* del_val_node(node *f,int val)
{
    node *start = f;
    if(size==1 && f->info==val)
    {
        size--;
        return NULL;
    }
    if(f->info == val)
    {
        size--;
        while(f->next!=start)
            f = f->next;
        f->next = start->next;
        return f->next;
    }
    while(f->next!=start && f->next->info!=val)
        f=f->next;
    if(f->next->info==val)
    {
        f->next = f->next->next;
        size--;
    }
    else
        printf("Element not found...");
    return start;
}

node* reverse(node *f)
{
    int i=0,*temp = (int*)malloc(size * sizeof(int));
    node *ptr=f;

    while(ptr->next!=f)
    {
        temp[i++]=ptr->info;
        ptr = ptr->next;
    }
    temp[i++]=ptr->info;
    ptr = f;
    while(ptr->next!=f)
    {
        ptr->info = temp[--i];
        ptr = ptr->next;
    }
        ptr->info = temp[--i];
    return f;

    
}