#include<stdio.h>
#include<stdlib.h>
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
void traversal()
{
    Node *p=NULL;int n;
        p=head;
        while(p!=NULL)
        {
            printf("%d ->",p->data);
            p=p->next;
        }
}

void swap()
{
    Node *p,*tptr=NULL,*q;
    p=head;
    q=head;
    while(p->next!=NULL)
    {
        tptr=p;
        p=p->next;
    }
    p->next=head->next;
    p->prev=NULL;
    head=p;
    printf("%d ",head->data);
    q->prev=tptr;
    tptr->next=q;
    q->next=NULL;
    printf("%d ",q->data);
}

int main()
{
  int a,b,i,j,n,da,d;
    do{
    printf("\nenter your choice\n");
    printf("1. insert at the begining\n");
   printf("2. swap the 1st node to the last and last to the 1st\n");
    printf("3. delete form 1st position\n");
    printf("4. print the node \n");
    printf("5.  EXIT\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("enter the data to be inserted\n");
            scanf("%d",&da);
            insfirst(da);
        break;

         case  2:
            swap();
            break;
        case 3:
        
        printf("%d ",delfirst());
        break;

        case 4:
            traversal();
            break;
        
        default:
        printf("wrobng chiose!!");
    }
            
    }while(n!=5);

    return 0;  
}



// enter your choice
// 1. insert at the begining
// 2. swap the 1st node to the last and last to the 1st
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 7

// enter your choice
// 1. insert at the begining
// 2. swap the 1st node to the last and last to the 1st
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 8

// enter your choice
// 1. insert at the begining
// 2. swap the 1st node to the last and last to the 1st
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 9

// enter your choice
// 1. insert at the begining
// 2. swap the 1st node to the last and last to the 1st
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 5

// enter your choice
// 1. insert at the begining
// 2. swap the 1st node to the last and last to the 1st
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 4
// 5 ->9 ->8 ->7 ->
// enter your choice
// 1. insert at the begining
// 2. swap the 1st node to the last and last to the 1st
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 2
// 7 5 
// enter your choice
// 1. insert at the begining
// 2. swap the 1st node to the last and last to the 1st
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 4
// 7 ->9 ->8 ->5 ->
// enter your choice
// 1. insert at the begining
// 2. swap the 1st node to the last and last to the 1st
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 5