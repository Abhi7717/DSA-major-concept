#include<stdio.h>

struct n
{
    /* data */
    int data;
    struct n* lchild;
    struct n* rchild;
}node;
 
 node *root=NULL;

 node *makenode()
 {
    node *nw;
    nw=(node*)malloc(sizeof(node));
    nw->lchild=NULL;
    nw->rchild=NULL;
    return (nw);
 }

 void insert()
 {

 }

 void inorder(node *p)
 {
    
    // p=root;
    if(p!=NULL)
    {
        /* code */
        inorder(p->lchild);
        printf("%d ",p->data);
        inorder(p->rchild);
    }
    
 }

void preorder(node *p)
{
    if(p!=NULL)
    {
        printf("%d ",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void postorder(node *p)
{
    if(p!=NULL)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        printf("%d ",p->data);
    }
}



void preorder(node *p)
{
    
    while(p!=NULL)
    {
        printf("%d ",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
    
}
