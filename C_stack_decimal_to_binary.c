// to convert decimal to binary using stack
#include<stdio.h>
#define size 10

void push(int [],int*,int);
void pop(int [],int*);
void traverse(int [],int*);
void dec_to_binary(int [],int*,int);

void main()
{
    int stk[size],num,top=-1,i;
    printf("Enter the number in decimal : ");
    scanf("%d",&num);
    dec_to_binary(stk,&top,num);
    printf("The number in binary : ");
    traverse(stk,&top);   

}

void push(int s[],int *t,int c)
{
    if(*t<size)
        s[++(*t)]=c;
    else
        printf("Stack overflow...");
}

void pop(int s[],int *t)
{
    (*t)--;
}

void traverse(int stk[],int *t)
{
    int i=*t;
    for(;i>=0;i--)
        printf("%d",stk[i]);

}

void dec_to_binary(int stk[],int *t,int num)
{
    while(num)
    {
        push(stk,t,num%2);
        num/=2;
    }
}
