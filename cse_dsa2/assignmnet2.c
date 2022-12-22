#include<stdio.h>
int main()
{
    int i,n,j;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements in arry1\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements are: \n");
    for(i=0;i<n;i++)
    { int c=0;
        // scanf("%d",&a[i]);
        for(j=i+1;j<n;j++)
        {
        if(a[i]<a[j])
        {
        printf("%d ",a[j]);
       c++;
       break;
        }
    
    }
   if(c==0)
       printf(" -1 ");
    }
return 0;
}

// enter the size of the array
// 5
// enter the elements in arry1
// 2
// 5
// 3
// 9
// 7
// elements are: 
// 5 9 9  -1  -1
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa2> 