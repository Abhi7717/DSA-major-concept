#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    /* data */
    int root;
    struct Node *lchild;
    struct Node *rchild;
}node;
 node *root=NULL;

node *makenode()
{
    node *nw;
    nw=(node*)malloc(sizeof(node));
    nw->lchild=NULL;
    nw->rchild=NULL;
    return nw;
}
int Insert(int data)
{
    node *nw,*p,*q;
    nw=makenode();
    nw->info=data;
    if(root==NULL)
    {
        root=nw;
    }
    else
    {
        p=root;
        while (p!=NULL)
        {
            /* code */
            q=p;
            if(p->info>data)
            p=p->lchild;
            else
            p=p->rchild;
        }
        if(q->info>data)
        {
            q->lchild=nw;
        }
        else
        q->rchild=nw;
    }
}


int search(int data)
{
    node *p;
    if(root==NULL)
    {
        printf("tree not found\n");
        return 0;
    }
    else{
        p=root;
        while(p!=NULL)

        {
            if(p->info==data)
            {
                printf("search successful\n");
                return 1;
            }
            else if(p->info>data)
            p=p->lchild;
            else
            p=p->rchild;
        }
        printf("search unsuccessfull\n");
        return 0;
    }
}


int BSTDelte(int data)
{
    node *p,*q;
    p=root;
    while(p->info!=data)
    {
        q=p;
        if(p->info>data)
        {
            p=p->lchild;
        }
        else
        p=p->rchild;
    }

    if((p->lchild!=NULL)&&(p->rchild!=NULL))
    {
        node *r;
        r=p->rchild;
        q=p;
        while(r->lchild!=NULL)
        {
            q=r;
            r=r->lchild;
        }
        int temp=p->info;
        p->info=r->info;
        r->info=temp;
        p=r;
    }


    //case 1 and  case 2 only left
    if((p->lchild==NULL)&& (p->rchild==NULL))
    {
        if(p==q->rchild)
        q->lchild=NULL;
        else
        q->rchild=NULL;
    }
    else
    {
        if(p->lchild!=NULL){
        if(p==q->lchild)
        q->lchild=p->lchild;
        else
        q->rchild=p->lchild;
        }
        else
        {
            if(p==q->lchild)
            q->lchild=p->rchild;
            else
            q->rchild=p->rchild;
        }
    }
}


node *traversal()

int main()

{

}