#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter the value of n \n");
    scanf("%d",&n);
    int a[n];
    int b[n];
    int o[n];
    printf("enter the elements in arry\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int v=0,m=0;
   for(i=0;i<n;i++)

   {
    
    int temp=a[i];
    if(temp%2==0)
    {
        b[v]=a[i];
        v++;
    }
    else{
        o[m]=a[i];
        m++;
    }
   }

    printf("even elements\n");
    for(i=0;i<v;i++)
    {
        printf("%d\n",b[i]);
    }
     printf("odd elements\n");
    for(i=0;i<m;i++)
    {
        printf("%d\n",o[i]);
    }
    return 0;
}


// enter the value of n 
// 6
// enter the elements in arry
// 1
// 2
// 3
// 4
// 5
// 6
// even elements
// 2
// 4
// 6
// odd elements
// 1
// 3
// 5
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa1> 