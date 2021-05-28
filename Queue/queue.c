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
            case 1: if(rear<size-1)
                    {
                    printf("Enter an element to push : ");
                    scanf("%d",&ele);
                    enqueue(queue,&front,&rear,ele);
                    }
                    else
                        printf("Queue overflow...");
                    break;
                        
            case 2: if((front)<=(rear) && rear>=0)
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
    if(*f<=0)
        (*f)=0;
    q[++(*r)]=ele;
}

int dequeue(int *q,int *f,int *r)
{
    int temp=(*f)++;
    if((*f)>(*r))
        (*f)=(*r)=-1;
    return q[temp];

}

void traversal(int *q,int f,int r)
{
    if(r<0)
        printf("Empty Queue...");
    else
    {
        printf("The Queqe is : ");
        for(;f<=r;f++)
            printf("%d  ",q[f]);
    }
        
}