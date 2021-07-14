#include<stdio.h>
#define size 5

typedef struct QUEUE
{
    int que[size],front,rear;
}queue;


void enqueue(queue *,int);
int dequeue(queue *);
void traversal(queue );

void main()
{
    int ele,del,opn=0;
    queue q;
    q.front=-1;
    q.rear=-1;

    while(opn!=4)
    {
        printf("\nMENU:\n01. Enqueqe\n02. Dequeue\n03. Traverse\n04. Exit\nChoose an option...");
        scanf("%d",&opn);
        switch(opn)
        {
            case 1: if(q.rear<size-1)
                    {
                    printf("Enter an element to push : ");
                    scanf("%d",&ele);
                    enqueue(&q,ele);
                    }
                    else
                        printf("Queue overflow...");
                    break;
                        
            case 2: if((q.front)<=(q.rear) && q.rear>=0)
                    {
                        del=dequeue(&q);
                        printf("The poped element is : %d",del);
                    }
                    else 
                        printf("Queue underflow...");
                    break;

            case 3: traversal(q);
                    break;
            
            case 4: break;

            default:printf("Wrong input...Please retry...");

        }
    }
    printf("Program exited...");

}


void enqueue(queue *q,int ele)
{
    if(q->front<=0)
        q->front=0;
    q->que[++(q->rear)]=ele;
}

int dequeue(queue *q)
{
    int temp = q->que[(q->front)++];
    if(q->front>q->rear)
        q->front = q->rear = -1;
    return temp;

}

void traversal(queue q)
{
    if(q.rear<0)
        printf("Empty Queue...");
    else
    {
        printf("The Queqe is : ");
        for(;q.front<=q.rear;q.front++)
            printf("%d  ",q.que[q.front]);
    }
        
}