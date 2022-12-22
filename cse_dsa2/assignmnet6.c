#include <stdio.h>
 
int pickMissingNumber(int *a1, int ar_size) 
{
    int i, sum = 0, n = ar_size + 1; 
    for(i = 0; i < ar_size; i++)
	{
        sum = sum + a1[i];
    }
   
    return (n*(n+1))/2 - sum;
}
 
int main()
{
    int i;
    int a1[] = {1,3,5,7,2,4};
 
    int ctr = sizeof(a1)/sizeof(a1[0]);
    printf("The given array is :  ");

	for(i = 0; i < ctr; i++)
	{
	printf("%d  ", a1[i]);
    } 
    printf("\n");
 
 printf("The missing number is : %d \n", pickMissingNumber(a1, ctr));
 return 0;
}

// The given array is :  1  3  5  7  2  4  
// The missing number is : 6
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa2> 