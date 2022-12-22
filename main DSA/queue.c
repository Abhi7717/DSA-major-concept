#include<stdio.h>
#define size 10
int queue[size];
int front =-1;
int rear =-1;
void insert(int data)
{
    if(rear==size-1)
    printf("queue is full");
    else{
        rear++;
        queue[rear]=data;
        if(front==-1)
        front=0;
    }
}
void delete()
{
    int data=-99999;
    if(front==-1)
    printf("queue is empty\n");
    else
    {
        data=queue[front];
        if(front==rear)
        front=rear=-1;
        else
        front++;
    }
}
void traverse()
{
    if(front==-1)
    printf("void");
    else{
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
    }
}
int main()
{
    int n,m;
    printf("1. insert the data\n");
    printf("2. delete the data\n ");
    printf("3. print the queue\n");
    printf("4.exit\n");
    do{
    printf("\nenter your choice\n");
   scanf("%d",&n);
   switch (n)
   {
   case 1:
        printf("enter the data\n");
        scanf("%d",&m);
        insert(m);
    break;
    case 2:
        delete();
    break;
    case 3:
        traverse();
    break;
   default:
    break;
   }
    }while(n!=4);
}


// 1. insert the data
// 2. delete the data 
//  3. print the queue
// 4.exit

// enter your choice
// 1
// enter the data
// 9

// enter your choice
// 1
// enter the data
// 8

// enter your choice
// 1
// enter the data
// 5

// enter your choice
// 3
// 9 8 5 
// enter your choice
// 4