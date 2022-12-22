#include<stdio.h>
int main()
{
    int i,j,k=0,n,min,max;
    printf("enter the size of the array\n");
    scanf("%d",&n);
       int a[n];
    printf("enter the elments in the array\n");
     for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    max=0;min=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    for(i=0;i<n;i++)
     if(min>a[i])
        min=a[i];
    printf("max = %d min = %d",max,min);

// printf("sum = \n");
for(i=0;i<n;i++)
{
    k+=a[i];
}
printf("sum = %d",k);
printf("avg = %d",(k/n));

    return 0;
}