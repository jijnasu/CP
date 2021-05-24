#include<stdio.h>
typedef struct NODE
{
    int val;
    struct NODE * next;
} node;
void main()
{
    node n1,n2,n3,n4,n5,*ptr;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    n5.next=NULL;
    printf("Enter 5 values for 5 nodes : \n");
    for(ptr=&n1; ptr != NULL ;ptr=ptr->next)
        scanf("%d",&(ptr->val));
    printf("Traversal of nodes : ");
    for(ptr=&n1; ptr != NULL ;ptr=ptr->next)
        printf("%d  ",ptr->val);
    // printf("--%d--",sizeof(node));

}