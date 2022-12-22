#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c=0;
   int m=0;
    printf("enetr the numebr\n");
    scanf("%d",&n);
    int p=n;
    while (p!=0)
    {
        /* code */
        r=p%10;
        c++;
        p=p/10;
    }
    p=n;
    while (p!=0)
    {
        /* code */
        r=p%10;
        m=m+(r*pow(10,c));
        
        p=p/10;
        c--;
    }
    // printf("%d ",m/10);
    if(n==m/10)
    {
        printf("palindrom number\n");

    }
    else
    printf("non palindrom numnber\n");
       
       return 0;
}