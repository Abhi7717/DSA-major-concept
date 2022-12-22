#include<stdio.h>
#define size 5
int queue[size];
int front =-1;
int rear =-1;

void insert(int data)
{
    if (((front==0)&&(rear==size-1))||(rear==front-1))
    printf("queue is overflow");
    else{
        if(rear==size-1)
        {
            rear=0;
        }
        else
        rear++;
        queue[rear]=data;
        if(front==-1)
        front=0;
    }
}

void delete()
{
    int data=-999;
    if(front==-1)
    printf("queue is empty\n");
    else
    {
        data=queue[front];
        if(front==rear)
        front=rear=-1;
        else if(front==size-1)
        front=0;
        else
        front++;
    }
}

void traverse()
{
    if(front==-1)
    printf("void");
    else if(front<=rear)
    {
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
    }
    else //if(rear>=front)
    {
        for (int i = front; i <size; i++)
        {
            printf("%d ",queue[i]);
        }
        for (int i = 0; i <=rear; i++)
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
