#include<stdio.h>
#define size 5
int stack[size];
int top=-1;

void push(int data)
{
    if(top==size-1)
    printf("stack overflow\n");
    else
    {
        top++;
        stack[top]=data;
    }
}

int pop()
{
    int data=-999;
    if(top==-1)
    printf("stack underflow\n");
    else{
        data=stack[top];
        top--;

    }
    return data;
}

void traverse()
{
    int i;
    if(top==-1)
    printf("stack is empty\n");
    else
    {
        i=top;
        while(i!=-1)
        {
            printf("%d ",stack[i]);
            i--;
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
// 7 6 9 8 
// enter your choice
// 2
// 7
// enter your choice
// 3
// 6 9 8 
// enter your choice
// 1
// enter the data
// 5

// enter your choice
// 1
// enter the data
// 4

// enter your choice
// 3
// 4 5 6 9 8 
// enter your choice
// 1
// enter the data
// 7
// stack overflow

// enter your choice
// 2
// 4
// enter your choice
// 3
// 5 6 9 8 
// enter your choice
// 1
// enter the data
// 4

// enter your choice
// 3
// 4 5 6 9 8 
// enter your choice
// 2
// 4
// enter your choice
// 2
// 5
// enter your choice
// 2
// 6
// enter your choice
// 2
// 9
// enter your choice
// 2
// 8
// enter your choice
// 2
// stack underflow
// -999
// enter your choice
// 3
// stack is empty

// enter your choice
// 1
// enter the data
// 2

// enter your choice
// 1
// enter the data
// 3

// enter your choice
// 1
// enter the data
// 4

// enter your choice
// 1
// enter the data
// 5

// enter your choice
// 3
// 5 4 3 2 
// enter your choice
// 4








// 1. insert the element
// 2. delete the element
// 3. print the elemts
// 4. exit

// enter your choice
// 1
// enter the data
// 5

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
// 4

// enter your choice
// 3
// 4 9 8 5 
// enter your choice
// 2
// 4
// enter your choice
// 3
// 9 8 5 
// enter your choice
// 2
// 9
// enter your choice
// 3
// 8 5 
// enter your choice
// 1
// enter the data
// 7

// enter your choice
// 3
// 7 8 5 
// enter your choice
