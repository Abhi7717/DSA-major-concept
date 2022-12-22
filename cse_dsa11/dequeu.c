#include<stdio.h>
#define size 10
int queue[size];

int front=5;
int rear=5;

void insertrear(int da)
{
    if(rear==size)
    {
        printf("queue is full\n");
    }
    else{
            queue[rear]=da;
            rear++;
       
    }
   
}

void insertfront(int da)
{
    if(front==0)
    {
        printf("queue is full\n");
    }
    else{
            front--;
            queue[front]=da;
        
    }
   
}

int deletfront()
{
    int data=-999;
    if(front==5 && rear==5)
    {
        printf("queue is underflow\n");
    }
    else
    {
        data=queue[front];
      
        if(rear==front-1)
        {
            rear=front=5;
        }
        else 
        {
        front++;
        }
    }
    return data;
}

int deletrear()
{
    int data=-999;
    if(front==5 && rear==5)
    {
        printf("queue is underflow\n");
    }
    else
    {
        data=queue[rear-1];
      
        if(rear==front-1)
        {
            rear=front=5;
        }
        else 
        {
        rear--;
        }
    }
    return data;
}

void traversal()
{
    // if(front==-1)
    // printf("void");
    // else{
        printf("\n queue is\n");
        for(int i=front;i<rear;i++)
    {
        printf("%d  ",queue[i]);
    }
    // for(int i=rear;i<size;i++)
    // {
    //     printf("%d  ",queue[i]);
    // }
    // }
}

int main()
{

int i,j,n,m;
do{
printf("\nenter your choice\n");
printf("1. inputed restricted dequeue\n");
printf("2. output restricted dequeue\n");
printf("3. exit\n");
scanf("%d",&m);
switch (m)
{
case 1:
    do{
printf("\n1. insert the value from rear\n");
printf("2. delete the value from front\n");
printf("3. delete the value from rear\n");
printf("4. traversal\n");
printf("5. exit\n");
printf("insert the value\n");

scanf("%d",&j);
switch (j)
{
case 1:
    /* code */
    printf("\nenter the data to be inserted\n");
    scanf("%d",&i);
    insertrear(i);
    break;

case 2:
    n=deletfront();
    printf("deteled queue : %d ",n);
    break;
case 3:
    n=deletrear();
    printf("deteled queue : %d ",n);
    break;
case 4:
    traversal();
    break;

default:
    printf("wrong chioce\n");
    break;
}
}while(j!=5);
    break;
case 2:

do{
printf("\n1. insert the value from rear\n");
printf("2. insert the value from front\n ");
printf("3. delete the value from front\n");
// printf("4. delete the value from rear\n");
printf("4. traversal\n");
printf("5. exit\n");
printf("insert the value\n");

scanf("%d",&j);
switch (j)
{
case 1:
    /* code */
    printf("\nenter the data to be inserted\n");
    scanf("%d",&i);
    insertrear(i);
    break;
case 2:
    /* code */
    printf("\nenter the data to be inserted\n");
    scanf("%d",&i);
    insertfront(i);
    break;
case 3:
    n=deletfront();
    printf("deteled queue : %d ",n);
    break;

case 4:
    traversal();
    break;

default:
    printf("wrong chioce\n");
    break;
}
}while(j!=5);
    break;
default:
    break;
}
}while(m!=3);
}

// /enter your choice
// 1. inputed restricted dequeue
// 2. output restricted dequeue
// 3. exit
// 1

// 1. insert the value from rear 
// 2. delete the value from front
// 3. delete the value from rear 
// 4. traversal
// 5. exit
// insert the value
// 1

// enter the data to be inserted
// 5

// 1. insert the value from rear
// 2. delete the value from front
// 3. delete the value from rear
// 4. traversal
// 5. exit
// insert the value
// 1

// enter the data to be inserted
// 6

// 1. insert the value from rear
// 2. delete the value from front
// 3. delete the value from rear
// 4. traversal
// 5. exit
// insert the value
// 1

// enter the data to be inserted
// 7

// 1. insert the value from rear
// 2. delete the value from front
// 3. delete the value from rear
// 4. traversal
// 5. exit
// insert the value
// 1

// enter the data to be inserted
// 8

// 1. insert the value from rear
// 2. delete the value from front
// 3. delete the value from rear
// 4. traversal
// 5. exit
// insert the value
// 4

//  queue is
// 5  6  7  8
// 1. insert the value from rear
// 2. delete the value from front
// 3. delete the value from rear
// 4. traversal
// 5. exit
// insert the value
// 2
// deteled queue : 5 
// 1. insert the value from rear
// 2. delete the value from front
// 3. delete the value from rear
// 4. traversal
// 5. exit
// insert the value
// 3
// deteled queue : 8 
// 1. insert the value from rear
// 2. delete the value from front
// 3. delete the value from rear
// 4. traversal
// 5. exit
// insert the value
// 4

//  queue is
// 6  7
// 1. insert the value from rear
// 2. delete the value from front
// 3. delete the value from rear
// 4. traversal
// 5. exit
// insert the value
// 5
// wrong chioce

// enter your choice
// 1. inputed restricted dequeue
// 2. output restricted dequeue
// 3. exit
// 2

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. traversal
// 5. exit
// insert the value
// 1

// enter the data to be inserted
// 8

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. traversal
// 5. exit
// insert the value
// 1

// enter the data to be inserted
// 7

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. traversal
// 5. exit
// insert the value
// 1

// enter the data to be inserted
// 6
// queue is full

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. traversal
// 5. exit
// insert the value
// 1

// enter the data to be inserted
// 5
// queue is full

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. traversal
// 5. exit
// insert the value
// 4

//  queue is
// 6  7  8  7
// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. traversal
// 5. exit
// insert the value
// 2

// enter the data to be inserted
// 4

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. traversal
// 5. exit
// insert the value
// 2

// enter the data to be inserted
// 5

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. traversal
// 5. exit
// insert the value
// 4

//  queue is
// 5  4  6  7  8  7
// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. traversal
// 5. exit
// insert the value
// 3
// deteled queue : 5 
// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. traversal
// 5. exit
// insert the value
// 4

//  queue is
// 4  6  7  8  7
// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. traversal
// 5. exit
// insert the value
// 5
// wrong chioce

// enter your choice
// 1. inputed restricted dequeue
// 2. output restricted dequeue
// 3. exit
// 3











//all in one

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 1

// enter the data to be inserted
// 6

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 1

// enter the data to be inserted
// 7

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 1

// enter the data to be inserted
// 8

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 1

// enter the data to be inserted
// 9

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 1

// enter the data to be inserted
// 10

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 1

// enter the data to be inserted
// 11
// queue is full

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 2

// enter the data to be inserted
// 5

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 2

// enter the data to be inserted
// 4

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 2

// enter the data to be inserted
// 3

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 2

// enter the data to be inserted
// 2

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 2

// enter the data to be inserted
// 1

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 2

// enter the data to be inserted
// 11
// queue is full

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 5

//  queue is
// 1  2  3  4  5  6  7  8  9  10
// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 3
// deteled queue : 1 
// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 3
// deteled queue : 2 
// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 3
// deteled queue : 3 
// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 4
// deteled queue : 10 
// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 4
// deteled queue : 9 
// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 4
// deteled queue : 8 
// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 5

//  queue is
// 4  5  6  7
// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 1

// enter the data to be inserted
// 8

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 5

//  queue is
// 4  5  6  7  8
// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 2

// enter the data to be inserted
// 3

// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 5

//  queue is
// 3  4  5  6  7  8
// 1. insert the value from rear
// 2. insert the value from front
//  3. delete the value from front
// 4. delete the value from front
// 5.traversal
// 6. exit
// insert the value
// 6





// #include <stdio.h>    
// #define size 5  
// int deque[size];    
// int f = -1, r = -1;    
// //  insert_front function will insert the value from the front    
// void insert_front(int x)    
// {    
//     if((f==0 && r==size-1) || (f==r+1))    
//     {    
//         printf("Overflow");    
//     }    
//     else if((f==-1) && (r==-1))    
//     {    
//         f=r=0;    
//         deque[f]=x;    
//     }    
//     else if(f==0)    
//     {    
//         f=size-1;    
//         deque[f]=x;    
//     }    
//     else    
//     {    
//         f=f-1;    
//         deque[f]=x;    
//     }    
// }    
    
// // insert_rear function will insert the value from the rear    
// void insert_rear(int x)    
// {    
//     if((f==0 && r==size-1) || (f==r+1))    
//     {    
//         printf("Overflow");    
//     }    
//     else if((f==-1) && (r==-1))    
//     {    
//         r=0;    
//         deque[r]=x;    
//     }    
//     else if(r==size-1)    
//     {    
//         r=0;    
//         deque[r]=x;    
//     }    
//     else    
//     {    
//         r++;    
//         deque[r]=x;    
//     }    
    
// }    
    
// // display function prints all the value of deque.    
// void display()    
// {    
//     int i=f;    
//     printf("\nElements in a deque are: ");    
        
//     while(i!=r)    
//     {    
//         printf("%d ",deque[i]);    
//         i=(i+1)%size;    
//     }    
//      printf("%d",deque[r]);    
// }    
    
// // getfront function retrieves the first value of the deque.    
// void getfront()    
// {    
//     if((f==-1) && (r==-1))    
//     {    
//         printf("Deque is empty");    
//     }    
//     else    
//     {    
//         printf("\nThe value of the element at front is: %d", deque[f]);    
//     }    
        
// }    
    
// // getrear function retrieves the last value of the deque.    
// void getrear()    
// {    
//     if((f==-1) && (r==-1))    
//     {    
//         printf("Deque is empty");    
//     }    
//     else    
//     {    
//         printf("\nThe value of the element at rear is %d", deque[r]);    
//     }    
        
// }    
    
// // delete_front() function deletes the element from the front    
// void delete_front()    
// {    
//     if((f==-1) && (r==-1))    
//     {    
//         printf("Deque is empty");    
//     }    
//     else if(f==r)    
//     {    
//         printf("\nThe deleted element is %d", deque[f]);    
//         f=-1;    
//         r=-1;    
            
//     }    
//      else if(f==(size-1))    
//      {    
//          printf("\nThe deleted element is %d", deque[f]);    
//          f=0;    
//      }    
//      else    
//      {    
//           printf("\nThe deleted element is %d", deque[f]);    
//           f=f+1;    
//      }    
// }    
    
// // delete_rear() function deletes the element from the rear    
// void delete_rear()    
// {    
//     if((f==-1) && (r==-1))    
//     {    
//         printf("Deque is empty");    
//     }    
//     else if(f==r)    
//     {    
//         printf("\nThe deleted element is %d", deque[r]);    
//         f=-1;    
//         r=-1;    
            
//     }    
//      else if(r==0)    
//      {    
//          printf("\nThe deleted element is %d", deque[r]);    
//          r=size-1;    
//      }    
//      else    
//      {    
//           printf("\nThe deleted element is %d", deque[r]);    
//           r=r-1;    
//      }    
// }    
    
// int main()    
// {    
//     insert_front(20);    
//     insert_front(10);    
//     insert_rear(30);    
//     insert_rear(50);    
//     insert_rear(80);    
//     display();  // Calling the display function to retrieve the values of deque    
//     getfront();  // Retrieve the value at front-end  
//     getrear();  // Retrieve the value at rear-end   
//     delete_front();    
//     delete_rear();    
//     display(); // calling display function to retrieve values after deletion   
//     return 0;    
// }     