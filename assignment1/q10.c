#include<stdio.h>
int main()
{
    int n,m,c=0;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("ener the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element you want to search\n");
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        if(m==a[i])
        {
        c++;
        break;
        }
    }
    if(c>=1)
    printf("elment is present %d",m);
    else
    printf("element not found\n");
}