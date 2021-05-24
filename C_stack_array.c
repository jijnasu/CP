//implementation of STACK without Function

#include<stdio.h>
#include<stdlib.h>
#define maxstk 5
int main()
{
    int stk[maxstk],top=-1,ele,pele,opt;
    while(1)
    {
        printf("\nEnter Function to be executed:\n 1.Push()\n 2.Pop()\n 3.Traverse()\n 4.Exit()\n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                if(top == maxstk-1)
            {
                printf("No Space available...\n");
            }
            else
            {
                printf("insert element to stack : ");
                scanf("%d",&ele);
                top++;
                stk[top] = ele;
            }
            break;
            case 2:
                if(top == -1)
            {
                printf("stack is empty and elements can't be poped...\n");
            }
            else
            {
                pele = stk[top];
                top--;
                printf("The Popped element is : %d\n",pele);
            }
            break;
            case 3:
                if(top>=0)
                {
                    printf("elements of stack are \n");
                 for(int i=top;i>=0;i--)
                 {
                     printf("%d\n",stk[i]);
                 }
                }
                else
                {
                    printf("No elements are present in Stack...\n");
                }
            break;
            case 4:
                exit(0);
            default:
                printf("PLEASE TRY A VALID FUNCTION!!!\n");
        }
    }
    return 0;
}