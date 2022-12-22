#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the value of n \n");
    scanf("%d",&n);
    int a[n];
    int b[n];
    int c[n];
    printf("enter the elements in arry1\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

   printf("enter the elements in arry2\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    // printf("enter the elements in arry\n");
    for(i=0;i<(n);i++)
    {
        c[i]=a[i];
    }
     int j=0;
    for(i=n;i<(n+n);i++)
    {
       
        c[i]=b[j];
        j++;
    }

    printf("Merged array\n");
    for(i=0;i<n+n;i++)
    {
        printf("%d\n",c[i]);
    }


for(i=0;i<n+n;i++)
{
    for(j=0;j<(n+n-1);j++)
    {
        int t=0;
        if(c[j]<c[j+1])
        {
            t=c[j];
            c[j]=c[j+1];
            c[j+1]=t;
        }
    }
}
printf("shported array\n");
    for(i=0;i<n+n;i++)
    {
        printf("%d\n",c[i]);
    }

    return 0;
}

// enter the value of n 
// 5
// enter the elements in arry1
// 12
// 1
// 2
// 3
// 4
// enter the elements in arry2
// 5
// 6
// 7
// 8
// 9
// Merged array
// 12
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// shported array
// 12
// 9
// 8
// 7
// 6
// 5
// 4
// 3
// 2
// 1
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa1> 
