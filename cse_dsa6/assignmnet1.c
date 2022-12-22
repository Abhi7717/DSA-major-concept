#include<stdio.h>
#include<stdlib.h>
struct Node
{
    /* data */int data;
  struct  Node *next;
};

struct Node* head=NULL;

struct Node *creatnode()
{
    struct Node* nw;
    nw=(struct Node*)malloc(sizeof(struct Node));
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

void reverse(){
// struct Node *p=NULL;
// struct Node *c;
// struct Node *n=NULL;
// c=head;
//  while (c!=NULL)
//     {
//         /* code */
//         // printf("%d ->",p->data);
//         n=c->next;
//         c->next=p;
//         p=c;
//         c=n;
//     }
//     head=p;

struct Node *c;

c=head;
struct Node *p=NULL;
struct Node *n=NULL;

 while (c!=NULL)
    {
        /* code */
        // printf("%d ->",p->data);
       n=p;
        p=c;
        c=c->next;
        p->next=n;
        
    }
    head=p;

}


int main()
{
    int a,b,i,j,n,da,d;
    
    printf("\n1. insert at the begining\n");
    printf("2. print in reverse order\n");
    printf("3. print the node\n");
    printf("4.  EXIT\n");
    do{
    printf("\nenter your choice\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("enter the data to be inserted\n");
            scanf("%d",&da);
            insfirst(da);

        break;
        case 3:
            treaverse();
            break;
        case 2:
            reverse();
            break;
        default:
        printf("wrong chiose!!");
    }
            
    }while(n!=4);

    return 0;
}

// 1. insert at the begining
// 2. print in reverse order
// 3. print the node
// 4.  EXIT

// enter your choice
// 1
// enter the data to be inserted
// 9

// enter your choice
// 1
// enter the data to be inserted
// 8

// enter your choice
// 1
// enter the data to be inserted
// 7

// enter your choice
// 1
// enter the data to be inserted
// 6

// enter your choice
// 3
// 6 ->7 ->8 ->9 ->
// enter your choice
// 1
// enter the data to be inserted
// 2

// enter your choice
// 2

// enter your choice
// 3
// 9 ->8 ->7 ->6 ->2 ->

