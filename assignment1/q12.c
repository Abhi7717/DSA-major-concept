#include<stdio.h>

int main()
{
    int i,j,k,n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements in the array\n");
    for ( i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
    for(j=0;j<(n-1);j++)
    {
        int t=0;
        if(a[j]<a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
}
for ( i = 0; i < n; i++)
    {
        /* code */
        printf("%d ",a[i]);
    }
    
return 0;
}