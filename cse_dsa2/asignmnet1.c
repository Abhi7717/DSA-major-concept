#include<stdio.h>
int main()
{
    int i,n,a,b,c,d;
 printf("enter the size of the array\n");
 scanf("%d",&n);
 int ar[n];   
 printf("enetr the element of the array\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&ar[i]);

}

printf("enter the lower and upper limit of the array\n");
scanf("%d %d",&a,&b);
for(i=0;i<n;i++)
{
if(ar[i]>a && ar[i]<b)
{
    c++;
    printf("the numer between two elements are : %d ",ar[i] );
}
// if(ar[i]>a && ar[i]<b)
// c++;

}
// printf("the  number of elemnt between two elemnts are(including both) : %d",c+d);

return 0;
}

// enter the size of the array
// 5
// enetr the element of the array
// 1
// 3
// 5
// 7
// 8
// enter the lower and upper limit of the array
// 3
// 7
// the numer between two elements are : 5 
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa2> 