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
    if(p->next!=NULL)
    {
        pw->next=p->next;
        pw->prev=p;
        p->next->prev=pw;
        p->next=pw;
    }
    else
    {
        pw->next=NULL;
        pw->prev=p;
        
        p->next=pw;
    }
        

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
    
    printf("1. inster at the first position\n");
    printf("2. inster at any position\n");
    printf("3. enter at the end posiiotn\n");
    printf("4. delet at the first position\n");
    printf("5. delet at any position\n");
    printf("6. delet from the end positon\n");
    printf("7. display the node\n");
    printf("8. EXIT\n");
    do{
    printf("\nenter your choice\n");
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

// 1. inster at the first position
// 2. inster at any position
// 3. enter at the end posiiotn
// 4. delet at the first position
// 5. delet at any position
// 6. delet from the end positon
// 7. display the node
// 8. EXIT

// enter your choice
// 1
// enter the data
// 8

// enter your choice
// 3
// enter the data
// 9

// enter your choice
// 2
// enter the data
// 8
// enter the data's position
// 8

// enter your choice
// 1
// enter the data
// 6

// enter your choice
// 7
// enter 1. forward 2. backward
// 1
// 6 ->8 ->8 ->9 ->
// enter your choice
// 5
// enter the data
// 8
// 8
// enter your choice
// 6
// 9
// enter your choice
// 71
// enter 1. forward 2. backward
// 1
// 6 ->8 ->
// enter your choice
// 7
// enter 1. forward 2. backward
// 2
// 8 ->6 ->
// enter your choice
// 8
// please enter the correct choisce
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa6> 