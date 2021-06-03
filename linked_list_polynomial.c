#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int coef,pwr;
    struct NODE *next;
}node;



node* create_poly();
void print_poly(node *);
void insertion_sort_poly(node *);

void main()
{
    node *poly;
    poly=create_poly();
    insertion_sort_poly(poly);
    print_poly(poly);
}


node* create_poly()
{
    node *poly,*ptr;
    char ch='y';
    ptr = poly = (node*)malloc(sizeof(node));
    printf("Enter coefficient and degree of a term : ");
    scanf("%d%d",&(poly->coef),&(poly->pwr));
    poly->next = NULL;
    while(1)
    {
        printf("Do you want to add node(y/n) : ");
        scanf(" %c",&ch);
        if(ch=='y')
        {
            ptr->next = (node*)malloc(sizeof(node));
            ptr = ptr->next;
            printf("Enter coefficient and degree of next term : ");
            scanf("%d%d",&(ptr->coef),&(ptr->pwr));
        }
        else
            break;
    }
    ptr->next = NULL;
    return poly;
}

void print_poly(node *start)
{
    if(start != NULL)
    {
        printf("\nThe polynomial is : ");
        while(start->next != NULL)
        {
            printf("%dx%d + ",start->coef,start->pwr);
            start = start->next;
        }
            printf("%dx%d = 0 ",start->coef,start->pwr);
    }
    printf("\n");
}

void insertion_sort_poly(node *f)
{
    int max,maxcoef;
    node *i,*j;
    for(i=f;i->next!=NULL;i=i->next)
    {
        max=i->pwr;
        for(j=i->next;j!=NULL;j=j->next)
            if(j->pwr > max)
                max=j->pwr;
        if(max != i->pwr)
        {
            for(j=i->next;(j!=NULL) && (j->pwr != max);j=j->next);
            maxcoef=j->coef;
            j->pwr=i->pwr;
            j->coef=i->coef;
            i->pwr=max;
            i->coef=maxcoef;

        }
    }
}