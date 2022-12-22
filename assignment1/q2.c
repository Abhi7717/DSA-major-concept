#include<stdio.h>
void isprime(int n)
{ 
    if(n==1)
    {
        n=0;
    }
    
    else{int c=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==0)
    {
        printf("%d ",n);
    }}
}
int main()
{
    int i,j,n,m;
    printf("enter the range in which you wanna print prime numebr\n");
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
    {
        isprime(i);
    }
     return 0;

}
