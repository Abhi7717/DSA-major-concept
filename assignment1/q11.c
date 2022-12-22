#include<stdio.h>
int main()
{
    int a=0,b=0,sum=1,n,i;
    printf("entre the nth term\n");
    scanf("%d",&n);
   
    printf("%d ",a);
    printf("%d ",sum);
    for(i=0;i<=n-2;i++)
    {
        a=sum;
        sum+=b;
        printf("%d ",sum);
        b=a;
    }
    return 0;

}