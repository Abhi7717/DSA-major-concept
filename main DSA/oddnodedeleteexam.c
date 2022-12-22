/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
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


void delteodd()//not working properly
{
    struct Node* p,*q,*z;

    p=head;
    z=p->next;
    while(p->next->next!=NULL)
    {

        q=p->next;
        p=p->next->next;
        q->next=p;
    }
    head=z;
    free(p);
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
    printf("8.  EXIT\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("enter the data to be inserted\n");
            scanf("%d",&da);
            insfirst(da);
            
        break;

        //     case 2:
        //     printf("enter the data to be inserted\n");
        //     scanf("%d",&d);
        //     insertend(d);
        //     break;

        // case 3:
        //     printf("enter the nth position\n");
        //     scanf("%d",&i);
        //     printf("enter the data\n");
        //     scanf("%d",&j);
        //     insatany(j,i);

        // break;

        // case 4:
        // printf(delfirst());
        // break;

        // case 5:
        // //  printf("enter the nth position\n");
            
        //     printf("enter the data\n");
        //     scanf("%d",&i);
        //     Delary(i);
        // break;

        //  case 6:
        // //  printf("enter the nth position\n");
            
        //     // printf("enter the data to  be deleted\n");
        //     // scanf("%d",&i);
        //     deletend();
        // break;

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