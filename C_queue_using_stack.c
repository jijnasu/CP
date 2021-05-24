#include<stdio.h>
#define size 5

void enqueue(int *,int *,int *,int);
int dequeue(int *,int *,int *);
void traversal(int *,int,int);

void main()
{
    int stkq[size],stk[size],t1=-1,t2=-1,ele,del,opn=0;
    while(opn!=4)
    {
        printf("\nMENU:\n01. Enqueqe\n02. Dequeue\n03. Traverse\n04. Exit\nChoose an option...");
        scanf("%d",&opn);
        switch(opn)
        {
            case 1: if(t1<size-1)
                    {
                    printf("Enter an element to push : ");
                    scanf("%d",&ele);
                    enqueue(stkq,stk,&t1,&t2,ele);
                    }
                    else
                        printf("Queue overflow...");
                    break;
                        
            case 2: if((front)<=(rear) && rear>=0)
                    {
                        del=dequeue(stkq,&front,&rear);
                        printf("The poped element is : %d",del);
                    }
                    else 
                        printf("Queue underflow...");
                    break;

            case 3: traversal(stkq,front,rear);
                    break;
            
            case 4: break;

            default:printf("Wrong input...Please retry...");

        }
    }
    printf("Program exited...");









}