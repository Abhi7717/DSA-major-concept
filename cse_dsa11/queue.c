#include<stdio.h>
#define size 10
int queue[size];
int front=-1;
int rear=-1;

void insert(int da)
{
    if(rear==size-1)
    {
        printf("queue is full\n");
    }
    else{
            rear++;
            queue[rear]=da;
        if (front==-1)
        {
         /* code */
            front=0;
        }
    }
   
}

int delet()
{
    int data=-999;
    if(front==-1)
    {
        printf("queue is underflow\n");
    }
    else
    {
        data=queue[front];
      
    if(rear==front)
    {
        rear=front=-1;
    }
    else
      front++;
    }
    return data;
}

void traversal()
{
    if(front==-1)
    printf("void");
    else{
        printf("\n queue is\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d  ",queue[i]);
    }
    }
}

int main()
{

int i,j,n;
do{
printf("\n1. insert the value\n");
printf("2. delete the value\n");
printf("3. traversal\n");
printf("4. exit\n");
printf("insert the value\n");

scanf("%d",&j);
switch (j)
{
case 1:
    /* code */
    printf("\nenter the data to be inserted\n");
    scanf("%d",&i);
    insert(i);
    break;
case 2:
    n=delet();
    printf("deteled queue %d \n",n);
    break;
case 3:
    traversal();
    break;

default:
    printf("wrong chioce\n");
    break;
}
}while(j!=4);
}


// 1. insert the value
// 2. delete the value
// 3. traversal       
// 4. exit
// insert the value   
// 1

// enter the data to be inserted
// 5

// 1. insert the value
// 2. delete the value
// 3. traversal       
// 4. exit
// insert the value   
// 1

// enter the data to be inserted
// 7

// 1. insert the value
// 2. delete the value
// 3. traversal
// 4. exit
// insert the value
// 1

// enter the data to be inserted
// 9

// 1. insert the value
// 2. delete the value
// 3. traversal
// 4. exit
// insert the value
// 1

// enter the data to be inserted
// 3

// 1. insert the value
// 2. delete the value
// 3. traversal
// 4. exit
// insert the value
// 1

// enter the data to be inserted
// 5

// 1. insert the value
// 2. delete the value
// 3. traversal
// 4. exit
// insert the value
// 3

//  queue is
// 5  7  9  3  5
// 1. insert the value
// 2. delete the value
// 3. traversal
// 4. exit
// insert the value
// 2
// deteled queue 5 

// 1. insert the value
// 2. delete the value
// 3. traversal
// 4. exit
// insert the value
// 2
// deteled queue 7 

// 1. insert the value
// 2. delete the value
// 3. traversal
// 4. exit
// insert the value
// 5
// wrong chioce

// 1. insert the value
// 2. delete the value
// 3. traversal
// 4. exit
// insert the value
// 3

//  queue is
// 9  3  5
// 1. insert the value
// 2. delete the value
// 3. traversal
// 4. exit
// insert the value
// 4