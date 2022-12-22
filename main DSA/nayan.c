#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* prev;
    struct node* next;
}Node;
Node *head=NULL;

Node *creatnode()
{
    Node* nw;
    nw=(Node *)malloc(sizeof(Node));
    nw->prev=nw;
    nw->next=nw;
    return nw;
}

void insleft(int data)
{
    Node *p;
    p=creatnode();
    p->data=data;
    if(head!=NULL)
    {
        p->next=head;
        p->prev=head->prev;
        head->prev->next=p;
        head->prev=p;
    }
    head=p;
}

void traverse()
{
    Node *p;
    p=head;
    do{
        printf("%d ->",p->data);
        p=p->next;
    }while(p!=head);
    printf("\n");
}


typedef struct nod
{
    int data;
    struct nod* prev;
    struct nod* next;
}Nod;
Nod *head1=NULL;

Nod *creatnod()
{
    Nod* nw;
    nw=(Nod *)malloc(sizeof(Nod));
    nw->prev=nw;
    nw->next=nw;
    return nw;
}

void insleftt(int data)
{
    Nod *p;
    p=creatnod();
    p->data=data;
    if(head1!=NULL)
    {
        p->next=head1;
        p->prev=head1->prev;
        head1->prev->next=p;
        head1->prev=p;
    }
    head1=p;
}

void traversee()
{
    Nod *p;
    p=head1;
    do{
        printf("%d ->",p->data);
        p=p->next;
    }while(p!=head1);
    printf("\n");
}

void merge()
{
    Node *q=head;
    Nod* p=head1;
    Node *k;
    while(p->next!=head1)
    {
        k=q->next;
        q->next=p;
        head1=p->next;
        p->next->prev=p->prev;
        p->prev->next=head1;
        p->prev=q;
        p->next=k;
        k->prev=p;
        q=q->next->next;
        p=head1;
        k=NULL;
    }
    q->next=p;
    p->prev=q;
    p->next=head;
    head->prev=p;
}


int main()
{  
    //inserting 1st list
       insleft(16);
       insleft(15);
       insleft(14);
       insleft(13);
       insleft(12);
// inserting 2md list
    
       insleftt(72);
       insleftt(71);
       insleftt(60);
       insleftt(50);
       insleftt(40);

       //displaying 1st list
    printf("1st list\n");
    traverse();       
    //displaying 2nd list
    printf("2nd list\n");
    traversee();
    // merging
    printf("after merging\n");
        merge();
    // displaying after merging

        traverse();
  
return 0;
}

