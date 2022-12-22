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
    int k=0;int p=n;
    for(i=0;i<n/2;i++)
    {
        j=*(a+i);
        *(a+i)=*(a+(p-1));
        *(a+(p-1))=j;
        p--;
   }
    printf("reverse \n");
   for(i=0;i<n;i++)
    {
        printf("%d  ",*(a+i));

    }
return   0;
}

// enter the size of the array
// 5
// enter the elemets in the array
// 2
// 3
// 4
// 5
// 6
// reverse 
// 6  5  4  3  2
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa3> 