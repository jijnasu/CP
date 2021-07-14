#include<stdio.h>
#include<stdlib.h>
#define nt -1

typedef struct NODE
{
    int val;
    struct NODE *left,*right;
} node;

void create(node *temp)
{
    int left,right;
    printf("Enter left and right node of %d :",temp->val);
    scanf("%d%d",&left,&right);
    if(left!=nt)
    {
        temp->left = (node*)malloc(sizeof(node));
        temp->left->val = left;
        create(temp->left);
    }
    else
        temp->left=NULL;
    if(right!=nt)
    {
        temp->right = (node*)malloc(sizeof(node));
        temp->right->val=right;
        create(temp->right);
    }
    else
        temp->right=NULL;
}

void inorder(node *root)
{
    if(root->left!=NULL)
        inorder(root->left);
    printf("%d ",root->val);
    if(root->right!=NULL)
        inorder(root->right);
    
}

void preorder(node *root)
{
    printf("%d ",root->val);
    if(root->left!=NULL)
        preorder(root->left);
    if(root->right!=NULL)
        preorder(root->right);
    
}

void postorder(node *root)
{
    if(root->left!=NULL)
        postorder(root->left);
    if(root->right!=NULL)
        postorder(root->right);
    printf("%d ",root->val);
    
}


void main()
{
    node *tree;
    tree = (node*)malloc(sizeof(node));
    printf("Enter the root node : ");
    scanf("%d",&tree->val);
    create(tree);
    printf("\nTree in inorder traversal : ");
    inorder(tree);
    printf("\nTree in preorder traversal : ");
    preorder(tree);
    printf("\nTree in postorder traversal : ");
    postorder(tree);
}
    