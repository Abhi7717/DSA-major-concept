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




// void reverseList()
// {
//    
//    Node *first = NULL;
//    Node *second = head;

//    
//    while (second != NULL)
//    {
//       first = second->prev;
//       second->prev = second->next;
//       second->next = first;
//       second = second->prev;
//    }

// 
//    if (first != NULL)
//       head = first->prev;
// }

int main()
{
  int a,b,i,j,n,da,d;
    do{
    printf("\nenter your choice\n");
    printf("1. insert at the begining\n");
    printf("2. to reverse the linked list\n");
    printf("3. delete form 1st position\n");
    printf("4. print the node\n");
    printf("5.  EXIT\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("enter the data to be inserted\n");
            scanf("%d",&da);
            insfirst(da);
        break;

        case 2:
            // printf("enter the data to be inserted\n");
            // scanf("%d",&d);
            // insertend(d);
            reverseList();
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