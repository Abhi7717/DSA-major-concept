#include<stdio.h>
#include <cstdlib>
int main()
{
    int i,j,n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int *ptr;
    ptr=(int *)malloc(n*sizeof(int));
    printf("enter the elemets in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));

    }
    int max=*(ptr);
     for(i=0;i<=n;i++)
    {
      
        if(*(ptr+i)<*(ptr+i+1))
        {
            max=*(ptr+i+1);
            // *(ptr+i)=*(ptr+i+1);
            // max=*(ptr+i+1);
        }

    }
    printf("max = %d",max);
    return 0;
}

    
// enter the size of the array
// 5
// enter the elemets in the array
// 2
// 3
// 5
// 4
// 1
// max = 5