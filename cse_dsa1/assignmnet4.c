#include <stdio.h>
 
int main()
{
	int a[10], i, j, s, C = 0;
	
	printf("Array size ");
	scanf("%d", &s);
	
	printf("\nEnter %d numbers:\n",s);
	for (i = 0; i < s; i++)
	{
    	scanf("%d", &a[i]);
   	}     
 
	for (i = 0; i < s; i++)
	{
		for(j = i + 1; j < s; j++)
		{
    		if(a[i] == a[j])
    		{
    			C++;
				break;
			}
		}
	}
 	printf("\n Total no of dublicate   =  %d ", C);
 	return 0;
}

// Array size 5

// Enter 5 numbers:

// 2
// 3
// 4
// 2
// 3

//  Total no of dublicate   =  2
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa1> 