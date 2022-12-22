#include<stdio.h>
#include<conio.h>
#define max 5
int size=0;
int insert(int A[],int data,int i)
{
int j;
if(size==max)
{
printf("Array is Full");
}
else if(i>size)
{
printf("invalid index");
}
else{
for(j=size-1;j>=i;j--)
{
A[j+1]=A[j];
}
A[i]=data;
size++;
}
}



int delet(int A[],int i)
{
int data,j;
if(size==0)
{
printf("\nArray is empty");
}
else if(i>size)
{
printf("\nInvalid index");
}
else{
data=A[i];
for(j=i;j<size;j++)
{
A[j]=A[j+1];
}
size--;
}
return(data);
}




void traverse(int A[])
{
int i;
for(i=0;i<size;i++)
{
printf("->%d",A[i]);
}
}


int main()
{
// clrscr();
int A[max],i,data;
int ch=4;
do{
printf("\n1.Insert\n2.Delete\n3.Traverse\n4.Exit");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\n Enter the data");
scanf("%d",&data);
printf("\nEnter the index");
scanf("%d",&i);
insert(A,data,i);
break;
case 2:
printf("\nEnter the index from which data to be deleted\n");
scanf("%d",&i);
data=delet(A,i);
printf("\nThe deleted data = %d",data);
break;
case 3:
traverse(A);
break;
default:
printf("wrong choice\n");
}
}while(ch!=4);
}