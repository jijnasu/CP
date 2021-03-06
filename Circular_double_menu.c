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
void swap(int*,int*);
void bubblesort(node*);


void main()
{
    node *start=NULL,*last=NULL;
    int pos,val;
    char ch='y';
    traverse(start);
    while(ch=='y')
    {
        int opn;
        printf("\nMENU:\n01- Create\n02- Add at Front\n03- Add at Rear\n04- Add at ith node\n05- Add after an Element");
        printf("\n06- Delete at Front\n07- Delete at Rear\n08- Delete at ith\n09- Delete node with a value\n10- Traverse");
        printf("\n11- Reverse\n12- Bubble Sort\n13- Exit\nSelect : ");
        scanf("%d",&opn);
        switch(opn)
        {
            case 1: start=create();
                    last = start->prev;
                    break;
            case 2: start = add_front(start);
                    last = start->prev;
                    break;
            case 3: add_rear(start);
                    last = start->prev;
                    break;
            case 4: printf("Enter the position : ");
                    scanf("%d",&pos);
                    start = add_at_ith(start,pos-1);
                    last = start->prev;
                    break;
            case 5: printf("Enter the value : ");
                    scanf("%d",&val);
                    add_after_node(start,val);
                    last = start->prev;
                    break;
            case 6: start = del_at_front(start);
                    if(start)
                        last = start->prev;
                    else
                        last = NULL;
                    break;
            case 7: start = del_at_rear(start);
                    if(start)
                        last = start->prev;
                    else
                        last = NULL;
                    break;
            case 8: printf("Enter the position : ");
                    scanf("%d",&pos);
                    start = del_ith_node(start,pos-1);
                    if(start)
                        last = start->prev;
                    else
                        last = NULL;
                    break;
            case 9: if(size<=0)
                        printf("List underflow...");
                    else
                    {
                        printf("Enter the value to be deleted : ");
                        scanf("%d",&val);
                        start = del_val_node(start,val);
                        if(start)
                            last = start->prev;
                        else
                            last = NULL;
                    }
                    break;
            case 10:traverse(last);
                    break;
            case 11:start = reverse(start);
                    last = start->prev;
                    break;
            case 12:bubblesort(start);
                    break;
            case 13:ch = 'n';
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
        f->next->prev = f;
        printf("Enter the node : ");
        scanf("%d",&(f->next->info));
        f->next->next=temp;
        temp->prev = f->next;
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
    ptr->next->prev = ptr;
    ptr = ptr->next;
    printf("Enter the node : ");
    scanf("%d",&(ptr->info));
    ptr->next=f;
    f->prev = ptr;
    size++;
    return ptr;
}

void add_rear(node *f)
{
    node *front = f;
    while(f->next!=front)
        f=f->next;
    f->next = (node*)malloc(sizeof(node));
    f->next->prev = f;
    printf("Enter the node : ");
    scanf("%d",&(f->next->info));
    f->next->next=front;
    front->prev = f->next;
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
            start->prev = ptr;
    }
    return start;
}

void traverse(node *start)
{
    printf("Size of Linked List : %d",size);
    if(start != NULL)
    {
        start = start->next;
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
        // printf("%d  ",ptr->info);
        // ptr = ptr->prev->prev;
        printf("\nThe linked list in backward traverse : ");
        while(ptr != start)
        {
            printf("%d  ",ptr->info);
            ptr = ptr->prev;
        }
        printf("%d  ",ptr->info);
        
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
        f->next->prev = f;
        f = f->next;
        printf("Enter the value of the node : ");
        scanf("%d",&(f->info));
        f->next = temp;
        temp->prev = f;
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
    start->next->prev = f;
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
    f->next = front;
    front->prev = f;
    size--;
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
        temp->next->prev = temp;
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
        f->next->prev = f;
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

void swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void bubblesort(node *front)
{
    node *f = front;
    int i,j;
    for(i=1;i<=size;i++)
        for(j=0,f=front;j<size-i;j++,f = f->next)
            if(f->info > f->next->info)
                swap(&f->info,&f->next->info);
}