#include<stdio.h>
void sum(int *a,int n)
{
  int sum=0,i;
  for(i=0;i<n;i++)
  {
    sum+=*(a+i);
  }

  printf("sum = %d",sum);
}
int main()
{
    int n,m;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elemnts of the arrya\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }

    sum(a,n);

    return 0;
}

// enter the size of array
// 4
// enter the elemnts of the arrya
// 1
// 2
// 3
// 4
// sum = 10
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa3> 

