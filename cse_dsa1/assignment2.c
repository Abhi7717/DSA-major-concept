#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter the value of n \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements in arry\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("\nsum = %d",sum);
    return 0;
}


// enter the value of n 
// 5
// enter the elements in arry
// 1
// 2
// 3
// 4
// 5

// sum = 15
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa1> 