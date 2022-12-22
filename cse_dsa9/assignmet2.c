#include<stdio.h>
  #include <stdlib.h>
  struct node {
      int val;
      struct node *next;
  };
 

struct node* head=NULL;
struct node* head1=NULL;
struct node* head2=NULL;
struct node *creatnode()
{
    struct node* nw;
    nw=(struct node*)malloc(sizeof(struct node));
    nw->next=NULL;
    return nw;
}

void insfirst(int data)
{
    struct node *nw;
    nw=creatnode();
    nw->val=data;
    nw->next=head;
    head=nw;
}

void treaverse()
{
    struct node* p;
    p=head;
    while (p!=NULL)
    {
        /* code */
        printf("%d ->",p->val);
        p=p->next;
    }
    
}



int main()
{
  int a,b,i,j,n,da,d;
    do{
    printf("\nenter your choice\n");
    printf("1. insert at the begining of 1st linked list\n");
    printf("2. \n");
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
            revdupli();
            break;

        case 3:
        
        printf("%d ",delfirst());
        break;

        case 4:
            treaverse();
            break;
        
        default:
        printf("wrobng chiose!!");
    }
            
    }while(n!=5);

    return 0;  
}