#include<stdio.h>
  #include <stdlib.h>
  struct node {
      int val;
      struct node *next;
  };
 

struct node* head=NULL;

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
int delfirst()
{
    int data;
    struct node* tptr=NULL;
    if(head!=NULL)
    {
        tptr=head;
        data=tptr->val;
        head=tptr->next;
        free(tptr);
        tptr=NULL;
    }
    return data;
}

void revdupli()
{
    struct node *p, *tptr, *d;
    p = head;
    while (p != NULL && p->next != NULL) 
    {
        tptr = p;
        while (tptr->next != NULL) 
        {
           if (p->val == tptr->next->val)
        {        
                d = tptr->next;
                tptr->next = tptr->next->next;
                free(d);
            }
            else 
                tptr = tptr->next;
        }
        p = p->next;
    }
}


int main()
{
  int a,b,i,j,n,da,d;
    do{
    printf("\nenter your choice\n");
    printf("1. insert at the begining\n");
    printf("2. to remove the duplicate from linked  list\n");
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



// enter your choice
// 1. insert at the begining
// 2. to remove the duplicate from linked  list
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 6

// enter your choice
// 1. insert at the begining
// 2. to remove the duplicate from linked  list
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 8

// enter your choice
// 1. insert at the begining
// 2. to remove the duplicate from linked  list
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 9

// enter your choice
// 1. insert at the begining
// 2. to remove the duplicate from linked  list
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 6

// enter your choice
// 1. insert at the begining
// 2. to remove the duplicate from linked  list
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 7

// enter your choice
// 1. insert at the begining
// 2. to remove the duplicate from linked  list
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 4

// enter your choice
// 1. insert at the begining
// 2. to remove the duplicate from linked  list
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 4
// 4 ->7 ->6 ->9 ->8 ->6 ->
// enter your choice
// 1. insert at the begining
// 2. to remove the duplicate from linked  list
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 2

// enter your choice
// 1. insert at the begining
// 2. to remove the duplicate from linked  list
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 4
// 4 ->7 ->6 ->9 ->8 ->
// enter your choice
// 1. insert at the begining
// 2. to remove the duplicate from linked  list
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 7

// enter your choice
// 1. insert at the begining
// 2. to remove the duplicate from linked  list
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 9

// enter your choice
// 1. insert at the begining
// 2. to remove the duplicate from linked  list
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 4

// enter your choice
// 1. insert at the begining
// 2. to remove the duplicate from linked  list
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 4
// 4 ->9 ->7 ->4 ->7 ->6 ->9 ->8 ->
// enter your choice
// 1. insert at the begining
// 2. to remove the duplicate from linked  list
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 2

// enter your choice
// 1. insert at the begining
// 2. to remove the duplicate from linked  list
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 4
// 4 ->9 ->7 ->6 ->8 ->
// enter your choice
// 1. insert at the begining
// 2. to remove the duplicate from linked  list
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 5