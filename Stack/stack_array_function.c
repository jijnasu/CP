//implementation of STACK using Function
#include<stdio.h>
#include<stdlib.h>
#define maxstk 5
void push(int [], int, int *);
void pop(int [], int *);
void traverse(int [], int);

int main()
{
    int stk[maxstk], top=-1, ele, pepe, opt;
    while(1)
    {
        printf("\ninput \n 1. push() \n 2. pop() \n 3. traverse() \n 4. exit() \n");
        scanf("%d",&opt);
        switch(opt)
        {

        case 1:
            printf("Insert element to the stack \n");
            scanf("%d",&ele);
            push(stk, ele, &top);
            break;

        case 2:
            pop(stk, &top);
            break;

        case 3:
            traverse(stk,top);
            break;

        case 4:
            exit(0);

        default :
            printf("There is no option to be execuded \n");
        }
    }

    return 0;
}

void push(int stk[],int ele,int *top)
{
    if(*top==maxstk-1)
    {
        printf("stack is full \n");
    }
    else
    {
        (*top)++;
        stk[*top]=ele;
    }
}

void pop(int stk[], int *top)
{
    int temp;
    if(*top==-1)
    {
        printf("stack is empty & elements can not be popped out \n");
    }
    else
    {
        printf("the popped element is %d \n", stk[*top]);
        // temp=;
        (*top)--;
    }
    // return temp;
}

void traverse(int stk[], int top)
{
    int i;
    printf("element of the stack are \n");
    for(i=top; i>=0; i--)
    {
        printf("%d\n",stk[i]);
    }
}