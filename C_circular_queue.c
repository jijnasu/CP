#include<stdio.h>
#define size 5

void enqueue(int *,int *,int *,int);
int dequeue(int *,int *,int *);
void traversal(int *,int,int);

void main()
{
    int queue[size],front=-1,rear=-1,ele,del,opn=0;
    while(opn!=4)
    {
        printf("\nMENU:\n01. Enqueqe\n02. Dequeue\n03. Traverse\n04. Exit\nChoose an option...");
        scanf("%d",&opn);
        switch(opn)
        {
            case 1: if(front!=(rear+1)%size)
                    {
                    printf("Enter an element to push : ");
                    scanf("%d",&ele);
                    enqueue(queue,&front,&rear,ele);
                    }
                    else
                        printf("Queue overflow...");
                    break;
                        
            case 2: if(front>=0)
                    {
                        del=dequeue(queue,&front,&rear);
                        printf("The poped element is : %d",del);
                    }
                    else 
                        printf("Queue underflow...");
                    break;

            case 3: traversal(queue,front,rear);
                    break;
            
            case 4: break;

            default:printf("Wrong input...Please retry...");

        }
    }
    printf("Program exited...");

}


void enqueue(int *q,int *f,int *r,int ele)
{
    if(*r<0)
        (*f)=(*r)=0;
    else
        *r=(*r+1)%size;
    q[*r]=ele;
}

int dequeue(int *q,int *f,int *r)
{
    int temp = *f;
    if((*f) == (*r))
        (*f)=(*r)=-1;
    else
        *f=(*f+1)%size;
    return q[temp];

}

void traversal(int *q,int f,int r)
{
    if(f<0)
        printf("Empty Queue...");
    else
    {
        printf("The Queqe is : ");
        for(;f!=r;f=(f+1)%size)
            printf("%d  ",q[f]);
        printf("%d  ",q[f]);
    }
        
}