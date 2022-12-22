#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
   struct node *next;
}Node;
Node *head=NULL;

Node *creatnode()
{
    Node *nw;
    nw=(Node *)malloc(sizeof(Node));
    nw->next=nw;
    return nw;
}

 Node*find(int data)
{
     Node* p;
    p=head;
    while((p!=NULL) && (p->data!=data))
    {
        p=p->next;
    }
    return p;
}

void insatany(int data,int x)
{
    Node *nw,*p;
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
}//not made for insert any node at last or first position



// void addleft_right(int data)//by sir
// {
//     Node *nw,*p;
//     nw=creatnode();
//     nw->data=data;
//     if(head!=NULL)
//     {
//         p=head;
//         while(p->next!=head)
//         {
//             p=p->next;
//         }
//         p->next=nw;
//         nw->next=head;
//     }
//     head=nw;
//     else
//     head=nw;
// }

void addleft(int data)//by me
{
    Node *nw=creatnode();
    Node *p;
    nw->data=data;
    if(head!=NULL){
        p=head;
    while(p->next!=head)
    {
        p=p->next;
    }
    nw->next=head;
    p->next=nw;
    }
    head=nw;
}

void addright(int data)
{
        Node *nw=creatnode();
    Node *p;
    nw->data=data;
    if(head!=NULL)
    {
        p=head;
    while(p->next!=head)
    {
        p=p->next;
    }
    nw->next=head;
    p->next=nw;
    }
    else
    head=nw;
}

void traverse()
{
    Node *p=head;
    do{
        printf("%d ->",p->data);
        p=p->next;
    }while(p!=head);

}

int delleft()
{
    Node *p,*tptr;
    int data=-999;
    data=tptr->data;
    if(head->next==head)
    {
        head=NULL;
    }
    else{
    p=head;
    while(p->next!=head)
    {
        p=p->next;
    }
    head=head->next;
    p->next=head;
    }
    free(tptr);
    tptr=NULL;
    return data;
}
 Node *findprev(int data)
{
 Node*p,*q;
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
     Node *p,*q;
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

int delright()
{
    Node *p,*tptr;
    int data=-999;
    tptr=head;
    if(head->next==head)
    head=NULL;
    else
    {
        while (tptr->next!=head)
        {
            /* code */
            p=tptr;
            tptr=tptr->next;
        }
        data=tptr->data;
        p->next=head;
    }
    free(tptr);
    tptr=NULL;
    return data;
}

int main()
{
    int da,d,a,b,n;
    printf("\nMENUE\n");
    printf("\n1. enter the data at the right side\n");
    printf("2. enter the data at any position\n");
    printf("3. enter the data at the left side\n");
    printf("4. delete the data from the right side\n");
    printf("5. delete the data from any position\n");
    printf("6. delete the data from left position\n");
    printf("7. print the data\n");
    printf("8. EXIT\n");
    do{
    printf("enter your choicse\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("\nenter the data to be inserted\n");
        scanf("%d",&a);
        addright(a);
        break;
    case 2:
            printf("\nenter the data to be inserted\n");
        scanf("%d",&a);
        printf("\nenter the data to be inserted\n");
        scanf("%d",&b);
        insatany(a,b);
        break;
    case 3:
        printf("\nenter the data to be inserted\n");
        scanf("%d",&a);
        addleft(a);
        break;
    case 4:
        printf("%d",delright());
        break;
    case 5:
     printf("\nenter the data to be inserted\n");
        scanf("%d",&a);
        Delary(a);
        break;
    case 6:
            printf("%d",delleft());
        break;
    case 7:
    printf("\nThe enter circular linked list are\n");
        traverse();
        break;
    default:
    printf("wronng choice");

        break;
    }
    }while(n!=8);
}




// MENUE

// 1. enter the data at the right side   
// 2. enter the data at any position     
// 3. enter the data at the left side    
// 4. delete the data from the right side
// 5. delete the data from any position  
// 6. delete the data from left position 
// 7. print the data
// 8. EXIT
// enter your choicse
// 1

// enter the data to be inserted
// 9
// enter your choicse
// 1

// enter the data to be inserted
// 7
// enter your choicse
// 1

// enter the data to be inserted
// 8
// enter your choicse
// 7

// The enter circular linked list are
// 9 ->7 ->8 ->
// enter your choicse
// 3

// enter the data to be inserted
// 10
// enter your choicse
// 7

// The enter circular linked list are
// 10 ->9 ->7 ->8 ->enter your choicse
// 2

// enter the data to be inserted
// 11

// enter the data to be inserted
// 7
// enter your choicse

// 7

// The enter circular linked list are
// 10 ->9 ->7 ->11 ->8 ->enter your choicse
// 4
// 8
// enter your choicse
// 7

// The enter circular linked list are
// 10 ->9 ->7 ->11 ->enter your choicse
// 6
// 1561379971
// enter your choicse
// 7

// The enter circular linked list are
// 9 ->7 ->11 ->enter your choicse
// 5

// enter the data to be inserted
// 7
// enter your choicse
// 7

// The enter circular linked list are
// 9 ->11 ->enter your choicse
// 8
// wronng choice
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa7> 