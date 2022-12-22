// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("enter the value of n \n");
//     scanf("%d",&n);
//     int a[n];
//     printf("enter the elements in arry1\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=i+1;j<n;j++)
//        {
//         if(a[i]==a[j])
//         {
//             c++;
//         }
//        }
//     }

//     return 0;
// }






#include<stdio.h>
int main()
{
    int n,i,j,c=0,x,t;
    printf("enter the size of array :");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements in arry\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int f[n];
    for(i=0;i<n;i++)
    {
    	x=a[i];
    	for(j=0;j<n;j++)
    	{
    		if(x==a[j])
    			c++;
		}
		f[i]=c;
		c=0;
	}
	for(i=0;i<n;i++)
	{
		x=f[i],t=i;
		for(j=0;j<n;j++)
		{
			if(f[j]>x)
			{
				t=j;
				x=f[j];
			}
		}
	}
	printf("The majority element is : %d",a[t]);
	return 0;
}

// enter the size of array :5
// enter the elements in arry
// 2
// 3
// 4
// 2
// 2
// The majority element is : 2
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa2>