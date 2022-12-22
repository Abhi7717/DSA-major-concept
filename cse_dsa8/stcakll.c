#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
     int data;
     struct Node *next;
}node;
node *top=NULL;

void push(int da)
{
    node *nw=(struct Node *)malloc(sizeof(struct Node));
    nw->data=da;
    if(top==NULL)
    nw->next=NULL;
    else
    {
        nw->next=top;
    }
    top=nw;
}

int pop()
{
    int da=0;
    node* p;
    if(top==NULL)
    printf("stack is empty\n");
    else
    {
        p=top;
        da=p->data;
        top=top->next;
        free(p);
        p=NULL;
    }
    return da;
}

void traverse()
{
    node *p;
    if(top==NULL)
    printf("stck is emppty\n");
    else
    {
        p=top;
        while(p!=NULL)
        {
            printf("%d ->",p->data);
            p=p->next;
        }
    }
}

int main()
{
    int n,i;
    printf("1. insert the element\n");
    printf("2. delete the element\n");
    printf("3. print the elemts\n");
    printf("4. exit\n");
    do{
    printf("\nenter your choice\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("enter the data\n");
        scanf("%d",&i);
        push(i);
        break;
    case 2:
        i=pop();
        printf("%d",i);
        break;
    case 3:
        traverse();
        break;
    default:
        printf("enter coreect chose\n");
        break;
    }
    }while(n!=4);
    return 0;
}


// 1. insert the element
// 2. delete the element
// 3. print the elemts  
// 4. exit

// enter your choice
// 1
// enter the data
// 8

// enter your choice
// 1
// enter the data
// 9

// enter your choice
// 1
// enter the data
// 6

// enter your choice
// 1
// enter the data
// 7

// enter your choice
// 3
// 7 ->6 ->9 ->8 ->
// enter your choice
// 2
// 7
// enter your choice
// 3
// 6 ->9 ->8 ->
// enter your choice
// 4