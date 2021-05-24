// Stack using structure
#include<stdio.h>
#include<stdlib.h>
#define size 5


struct stack
{
    int stk[size],top;
};

void push(struct stack *,int);
int pop(struct stack *);
void traverse(struct stack *);



int main()
{
    int top=-1, ele, pele, opt;
    struct stack s;
    s.top=-1;
    while(1)
    {
        printf("\nInput \n 1. push() \n 2. pop() \n 3. traverse() \n 4. exit() \n");
        scanf("%d",&opt);
        switch(opt)
        {

            case 1:
                if(s.top<size-1)
                {
                    printf("Insert element to the stack \n");
                    scanf("%d",&ele);
                    push(&s,ele);
                }   
                else 
                    printf("Stack overflow...");
                break;

            case 2:
                if(s.top>=0)
                {
                    pele=pop(&s);
                    printf("Poped element is : %d",pele);
                }
                else 
                    printf("Stack underflow...");

                break;

            case 3:
                traverse(&s);
                break;

            case 4:
                exit(0);

            default :
                printf("Invalid option... \n");
        }
    }

    return 0;
}

void push(struct stack *s,int ele)
{
    if(s->top<0)
        s->top=0;
    else
        (s->top)++;
    s->stk[s->top]=ele;

}

int pop(struct stack *s)
{
    return s->stk[(s->top)--];
}

void traverse(struct stack *s)
{
    int i=0;
    if(s->top<0)
        printf("Empty stack...");
    else
        for(i=(s->top);i>=0;i--)
            printf("%d\n",s->stk[i]);
}