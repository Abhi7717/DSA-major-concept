#include <stdio.h>
void nonzero(int a[100][100],int n);
void sum(int a[100][100],int n);
void minor(int a[100][100],int n);
void product(int a[100][100],int n);

int main()
{
	int i,j,n;
	printf("Enter size of matrix :");
	scanf("%d",&n);
	int a[100][100];
	printf("Enter elements of array :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Given array :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	nonzero(a,n);
	sum(a,n);
	minor(a,n);
	product(a,n);
	return 0;
}
void nonzero(int a[100][100],int n)
{
	printf("Non zero Elements :\n");
	int i,j;
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		if(a[i][j]!=0)
		 printf("%d  ",a[i][j]);
	}
}
void sum(int a[100][100],int n)
{
	printf("\nSum of Elements above leading diagonal : ");
	int i,j,sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(j>i)
		 	 sum=sum+a[i][j];
	}
	printf("%d ",sum);
}
void minor(int a[100][100],int n)
{
	printf("\nElements below leading diagonal : ");
	int i,j,sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(i>j)
		 	 printf("%d  ",a[i][j]);
	}
	
}
void product(int a[100][100],int n)
{
	int i,j,p=1;
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			/* code */
			if(i==j)
			{
				p=p*a[i][j];
			}
		}
		
		/* code */
	}
	
	// for(i=0;i<n;i++)
	// {
	// 	p=p*a[i][i];
	// }
	// for(i=0;i<n;i++)
	// {
	// 	p=p*a[i][n-i-1];
	// }
	// if(n%2!=0)
	// p=p/a[n/2][n/2];
	printf("\nProduct of diagonal elements :%d",p);
}


// Enter size of matrix :3
// Enter elements of array :
// 1
// 4
// 6
// 8
// 3
// 4
// 2
// 8
// 9
// Given array :
// 1 4 6
// 8 3 4
// 2 8 9
// Non zero Elements :
// 1  4  6  8  3  4  2  8  9
// Sum of Elements above leading diagonal : 14
// Elements below leading diagonal : 8  2  8
// Product of diagonal elements :324
// --------------------------------
// Process exited after 9.406 seconds with return value 0
// Press any key to continue . . .