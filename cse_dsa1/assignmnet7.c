#include <stdio.h>

int main()
{
    
    int n, i, j, c;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n], f[n];
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        f[i] = -1;
    }
    
    for(i=0; i<n; i++)
    {
        c = 1;
        for(j=i+1; j<n; j++)
        {
            /* If duplicate element is found */
            if(a[i]==a[j])
            {
                c++;

                /* Make sure not to count frequency of same element again */
                f[j] = 0;
            }
        }

        /* If frequency of current element is not counted */
        if(f[i] != 0)
        {
            f[i] = c;
        }
    }

    /*
     * Print frequency of each element
     */
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(f[i] != 0)
        {
            printf("%d occurs %d times\n", a[i], f[i]);
        }
    }

    return 0;
}

// Enter size of array: 6
// Enter elements in array:
// 3
// 4
// 5
// 3
// 4
// 3

// 3 occurs 3 times
// 4 occurs 2 times
// 5 occurs 1 times