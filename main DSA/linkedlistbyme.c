#include<stdio.h>
#include<stdlib.h>
struct Node
{
    /* data */int data;
  struct  Node *next;
};

struct node* head=NULL;

struct Node *creatnode()
{
    struct Node* nw;
    nw=(struct node*)malloc(sizeof(struct Node));
    nw->next=NULL;
    return nw;
}

void insfirst(int data)
{
    struct Node *nw;
    nw=creatnode();
    nw->data=data;
    nw->next=head;
    head=nw;
}

void treaverse()
{
    struct Node* p;
    p=head;
    while (p!=NULL)
    {
        /* code */
        printf("%d ->",p->data);
        p=p->next;
    }
    
}

void delteodd()
{
    struct Node* p,*q,*z;

    p=head;
    z=p->next;
    while(p->next!=NULL)
    {

        q=p->next;
        p=p->next->next;
        q->next=p;
    }
    head=z;
    free(p);
}
struct Node*find(int data)
{
    struct Node* p;
    p=head;
    while((p!=NULL) && (p->data!=data))
    {
        p=p->next;
    }
    return p;
}

void insatany(int data,int x)
{
    struct Node *nw,*p;
    nw=creatnode();
    nw->data=data;
    p=find(x);
    if(p==NULL)
    {
        printf("Node dose not exisst\n");
    }
    else{
        nw->next=p->next;
        p->next=nw;
    }
}

void insertend(int data)
{
    struct Node *pw,*p,*q;
    pw=creatnode();
    pw->data=data;
    p=head;
    while(p!=NULL)
       {
              q=p;
        p=p->next;
    }
    q->next=pw;
    pw->next=NULL;
}

int delfirst()
{
    int data;
    struct Node* tptr=NULL;
    if(head!=NULL)
    {
        tptr=head;
        data=tptr->data;
        head=tptr->next;
        free(tptr);
        tptr=NULL;
    }
    return data;
}

struct Node *findprev(int data)
{
struct Node*p,*q;
    p=head;
    while((p!=NULL)&&(p->data!=data))
    {
        q=p;
        p=p->next;
    }
    if(p==NULL)
    q=NULL;
    return q;
}

void Delary(int data)
{
    struct Node *p,*q;
    q=findprev(data);
    if(q!=NULL)
    {
        p=q->next;
        q->next=p->next;
        free(p);
        p=NULL;
    }
    else
    printf("NODE NOT FOUND");
}

void deletend()
{
    struct Node *p,*q;
     p=head;
    while(p->next!=NULL)
       {
              q=p;
        p=p->next;
    }
    printf("%d",p->data);
    free(p);
    // p=NULL;
    q->next=NULL;
    
}

int main()
{
    int a,b,i,j,n,da,d;
    do{
    printf("\nenter your choice\n");
    printf("1. insert at the begining\n");
    printf("2. insert at end position\n");
    printf("3. insert at the nth position\n");
    printf("4. delete form 1st position\n");
    printf("5. delete form nth position\n");
    printf("6. delete form end position\n");
    printf("7. print the node\n");
    printf("8. delete tje odd numbber of nodes\n");
    printf("9.  EXIT\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("enter the data to be inserted\n");
            scanf("%d",&da);
            insfirst(da);

        break;

            case 2:
            printf("enter the data to be inserted\n");
            scanf("%d",&d);
            insertend(d);
            break;

        case 3:
            printf("enter the nth position\n");
            scanf("%d",&i);
            printf("enter the data\n");
            scanf("%d",&j);
            insatany(j,i);

        break;

        case 4:
        printf(delfirst());
        break;

        case 5:
        //  printf("enter the nth position\n");
            
            printf("enter the data\n");
            scanf("%d",&i);
            Delary(i);
        break;

         case 6:
        //  printf("enter the nth position\n");
            
            // printf("enter the data to  be deleted\n");
            // scanf("%d",&i);
            deletend();
        break;

        case 7:
            treaverse();
            break;
        case 8:
        delteodd();
        break;
        default:
        printf("wrobng chiose!!");
    }
            
    }while(n!=9);

    return 0;
}