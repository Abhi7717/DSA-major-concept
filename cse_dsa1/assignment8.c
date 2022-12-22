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
    
   int max=0,min=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
        else
        min=a[i];
           }
    printf("max : %d \n min = %d",max,min);
    return 0;
}


// enter the value of n 
// 5
// enter the elements in arry
// 3
// 4
// 5
// 6
// 7
// max : 7 
//  min = 3
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa1>

