#include<stdio.h>
#include<stdlib.h>
int main()
{
    // int* ptr;
    int n, i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Entered number of elements: %d\n", n);
 
    // ptr = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; ++i) {
            scanf("%d",&a[i]);
        }
        for(i=n-1;i>=0;i--)
        {
            printf("%d\n",a[i]);
        }
    return 0;
}

// Enter number of elements:5
// Entered number of elements: 5
// 1
// 2
// 3 
// 4
// 5
// 5
// 4
// 3
// 2
// 1
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa1> 