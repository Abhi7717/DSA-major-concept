
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter the value of n \n");
    scanf("%d",&n);
    int a[n];
    // int b[n];
    printf("enter the elements in arry\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
   int max=0,max2;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max2=max;
        max=a[i];
        }
           }
    printf("2nd max : %d \n ",max2);
    return 0;
}


// enter the value of n 
// 6
// enter the elements in arry
// 4
// 6
// 7
// 4
// 9
// 10
// 2nd max : 9 

// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa1> 

