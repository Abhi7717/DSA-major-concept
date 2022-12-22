#include<stdio.h>
#include <stdlib.h>
typedef struct node
{
    /* data */
    int  data;
    struct node *prev;
    struct node *next;
}Node;
Node *head=NULL;

Node* creatNode()
{
    Node *nw;
    nw=(Node *)malloc(sizeof(struct node));
    nw->next=NULL;
    nw->prev=NULL;
    return  nw;
}

void insfirst(int data)
{
    Node *nw;
    nw=creatNode();
    nw->data=data;
    if(head!=NULL)
    {
        
        nw->next=head;
        head->prev=nw;
    }
    head=nw;
}

Node *find(int data)
{
    Node *p;
    p=head;
    while((p->data!=data) && (p!=NULL))
    {
        p=p->next;
    }
    return p;
}

void insertany(int  data,int x)
{
    Node *p=NULL,*pw;
     p=find(x);
    if(p==NULL)
    {
        printf("Node dose not exist\n");
    }
    else{
    pw=creatNode();
    pw->data=data;
    pw->next=p->next;
    pw->prev=p;
    p->next->prev=pw;
    p->next=pw;

    }
    // p=NULL;
}

void insterend(int data)
{
    Node *nw,*p;
    nw=creatNode();
    p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    nw->data=data;
    nw->prev=p;
    p->next=nw;
    nw->next=NULL;
}

int delfirst()
{
        Node *tprt;
        tprt=head;
        int data=-999;
        if(head!=NULL)
        {
            tprt=head;
            data=tprt->data;
            head=head->next;
            head->prev=NULL;
            free(tprt);
            tprt=NULL;
        } 
        return data;
}

int deleany(int data)
{
    Node *p,*q;
    int da=-999;
     q=find(data);
    if(q!=NULL)
    {
     p=q->prev;
    da=q->data;
    p->next=q->next;
    q->next->prev=q->prev;
    
    free(q);
    }
    else
    printf("there is no node\n");
    return da;
}

int delend()
{
    Node *p;
    int da;
    p=head;
    if(p!=NULL)
    {
    while(p->next!=NULL)
    {
        p=p->next;
    }
    da=p->data;
    p->prev->next=NULL;
    free(p);
    }
    return da;
}

void traversal()
{
    Node *tail=NULL,*p=NULL;int n;
     for(tail=head;tail->next!=NULL;tail=tail->next);
    printf("enter 1. forward 2. backward\n");
    scanf("%d",&n);
    if(n==1)
    {
        p=head;
        while(p!=NULL)
        {
            printf("%d ->",p->data);
            p=p->next;
        }
    }
    else{
        p=tail;
        while(p!=NULL)
        {
            printf("%d ->",p->data);
            p=p->prev;
        }
    }
}

int main()
{
    int a,da,c,n;
    do{
    printf("\n1. inster at the first position\n");
    printf("2. inster at any position\n");
    printf("3. enter at the end posiiotn\n");
    printf("4. delet at the first position\n");
    printf("5. delet at any position\n");
    printf("6. delet from the end positon\n");
    printf("7. display the node\n");
    printf("8. EXIT\n");
    printf("enter your choice\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        /* code */
        printf("enter the data\n");
        scanf("%d",&da);
        insfirst(da);
        break;
    case 2:
             printf("enter the data\n");
        scanf("%d",&da);
        printf("enter the data's position\n");
        scanf("%d",&a);
        insertany(da,a);
    break;

    case 3:
        printf("enter the data\n");
        scanf("%d",&da);
        insterend(da);
    break;

    case 4:
       printf("%d", delfirst());
    break;
    case 5:
        printf("enter the data\n");
        scanf("%d",&da);
        printf("%d",deleany(da));
    break;
    case 6:
        printf("%d",delend());
        break;
    case 7:
        traversal();
    break;
    default:
    printf("please enter the correct choisce\n");
        break;
    }
}while(n!=8);
return 0;
}