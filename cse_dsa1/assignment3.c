#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter the value of n \n");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("enter the elements in arry\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       b[i]= a[i];
    }
    printf("copied elements\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
    
    return 0;
}


// enter the value of n 
// 5
// enter the elements in arry
// 1
// 2
// 3
// 45
// 6
// copied elements
// 1
// 2
// 3
// 45
// 6
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa1> 