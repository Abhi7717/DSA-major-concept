#include <stdio.h>
int main(){
	int a[10], fa[10], i, j, c, Size,k=0;
	printf("Enter Number of elements in an array  :   ");
	scanf("%d", &Size);
	printf("Enter elements of an Array  :  ");
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &a[i]);
    }   
 	for (i = 0; i < Size; i++)
	{
		c= 0;
		for(j = i + 1; j < Size; j++)
		{
    		if(a[i] == a[j])
    		{
    			c++;
    			a[j] = 0;
				a[i]=0;
    		}
    	}
    	if(a[i] != 0)
    	{
    		fa[k] = a[i];
			k++;
		}
	}
 	printf("\nList of Unique Elemnts  : ");
 	for (i = 0; i < k; i++)
  	{
  			printf("%d\t", fa[i]);
	}	     
 	return 0;
}

// Enter Number of elements in an array  :   5
// Enter elements of an Array  :  
// 3
// 4
// 4
// 3
// 5

// List of Unique Elemnts  : 5
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa1> 