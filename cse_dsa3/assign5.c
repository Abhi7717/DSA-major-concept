#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elemets in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    printf("shorted array \n");
    
    // for(i=0;i<n;i++)
    // {
    //     int max=0;
    //     for(j=0;i<n-1;j++)
    //     {
            
    //         if(*(a+j)<*(a+j+1))
    //         {
    //             max=*(a+j+1);
    //             *(a+j+1)=*(a+(j));
    //             *(a+(j))=max;
    //         }
    //     }
    // }

   for(i=0;i<n;i++)
     {
    for(j=0;j<(n-1);j++)
    {
        int t=0;
        if(*(a+j)<*(a+j+1))
        {
            t=*(a+j);
            *(a+j)=*(a+j+1);
            *(a+j+1)=t;
        }
    }
}

    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
    return 0;
}

// enter the size of the array
// 5
// enter the elemets in the array
// 2
// 3
// 4
// 6
// 4
// shorted array 
// 6 4 4 3 2
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa3> 