#include<stdio.h>
#define size 10
int stack[size];
int top=-1;

void push(int data)
{
    if(top==size-1)
    printf("stack overflow\n");
    else if(top==-1)
    {
        top++;
        stack[top]=data;
    }
    else if(top==0)
    {
        if(stack[top]>=data)
        {
            top++;
            int t=stack[0];
            stack[0]=data;
            stack[top]=t;

        }
        else
        {
            top++;
            stack[top]=data;
        }
    }
    else
    {
        // for(int i=top;i>=0;i--){
        if(stack[top]>=data && stack[top-1]<=data)
        {
             
            int t=stack[top];
            stack[top]=data;
            top++;
            stack[top]=t;
            // break;
        }
        //  else if(stack[top]>=data)
        // {
        //     int j=0;
        //      j=stack[top];
        //     for(int i=top;i>=0;i--){
            
        //     stack[i]=stack[i-1];
        //     // stack[top-1]=j;
        //     }
        //     top++;
        //     stack[top]=j;
        //     stack[0]=data;
        //     break;
        // }
        // else //if(stack[top]>=data)
        // {
        //     top++;
        //     stack[top]=data;
        // }
    // }
        
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
// 5

// enter your choice
// 1
// enter the data
// 3

// enter your choice
// 1
// enter the data
// 4

// enter your choice
// 3
// 5 4 3 
// enter your choice
// 1
// enter the data
// 2

// enter your choice
// 3
// 5 4 3 2 
// enter your choice
// 1
// enter the data
// 6

// enter your choice
// 3
// 6 5 4 3 2
// enter your choice
// 4
