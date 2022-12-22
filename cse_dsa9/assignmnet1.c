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


void middleNode(){
            int c=0,i,j;
            struct node *q,*p;
            q=head;p=head;
            while(q!=NULL)
            {
                c++;
                q=q->next;
            }
            if(c%2!=0)
            {
                i=c;
                j=(i+1)/2;
            }
            else
            {
                i=c;
                j=(i/2)+1;
            }
            while(j!=1)
            {
                p=p->next;
                j--;
            }
            // head=p;
            // return head;
            printf("middle element = %d ",p->val);
}
int main()
{
  int a,b,i,j,n,da,d;
    do{
    printf("\nenter your choice\n");
    printf("1. insert at the begining\n");
    printf("2. to priont  the middle of the elment\n");
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
            middleNode();
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
// 2. to priont  the middle of the elment
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 4

// enter your choice
// 1. insert at the begining
// 2. to priont  the middle of the elment
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 5

// enter your choice
// 1. insert at the begining
// 2. to priont  the middle of the elment
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 6

// enter your choice
// 1. insert at the begining
// 2. to priont  the middle of the elment
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 7

// enter your choice
// 1. insert at the begining
// 2. to priont  the middle of the elment
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 8

// enter your choice
// 1. insert at the begining
// 2. to priont  the middle of the elment
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 4
// 8 ->7 ->6 ->5 ->4 ->
// enter your choice
// 1. insert at the begining
// 2. to priont  the middle of the elment
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 2
// middle element = 6 
// enter your choice
// 1. insert at the begining
// 2. to priont  the middle of the elment
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 7

// enter your choice
// 1. insert at the begining
// 2. to priont  the middle of the elment
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 3
// 7 
// enter your choice
// 1. insert at the begining
// 2. to priont  the middle of the elment
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 1
// enter the data to be inserted
// 9

// enter your choice
// 1. insert at the begining
// 2. to priont  the middle of the elment
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 4
// 9 ->8 ->7 ->6 ->5 ->4 ->
// enter your choice
// 1. insert at the begining
// 2. to priont  the middle of the elment
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 2
// middle element = 6 
// enter your choice
// 1. insert at the begining
// 2. to priont  the middle of the elment
// 3. delete form 1st position
// 4. print the node
// 5.  EXIT
// 5