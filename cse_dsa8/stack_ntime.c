#include<stdio.h>
#define size 50
int stack[size];
int top=-1;

void push(int data)
{
    if(top==size-1)
    printf("stack overflow\n");
    else if(top+data>size-1)
        printf("stack overflow\n");
    else
    {
        for(int i=1;i<=data;i++){
        top++;
        stack[top]=data;
        }
    }
}

int pop()
{
    int data=-999;
    
    if(top==-1)
    printf("stack underflow\n");
    
    else{
        for(int  i=1;i<=stack[top];i++){
        data=stack[top];
        top--;
        }
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
// 9

// enter your choice
// 1
// enter the data
// 8

// enter your choice
// 1
// enter the data
// 6

// enter your choice
// 1
// enter the data
// 3

// enter your choice
// 3
// 3 3 3 6 6 6 6 6 6 8 8 8 8 8 8 8 8 9 9 9 9 9 9 9 9 9 
// enter your choice
// 2
// 6
// enter your choice
// 3
// 6 6 6 8 8 8 8 8 8 8 8 9 9 9 9 9 9 9 9 9 
// enter your choice
// 4