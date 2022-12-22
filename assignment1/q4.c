// #include<stdio.h>
// int main()
// {
//     int n,m,i,f=1;
//     printf("enter the number and its power\n");
//     scanf("%d%d",&n,&m);
//     for ( i = 1; i <= m; i++)
//     {
//        f=f*n;
//     }
//     printf("number = %d ",f);
//     return 0;
// }

#include<stdio.h>
int power(int n,int m)
{
    int f;
    if(m>0)
    {
        return n*power(n,m-1);
    }
    else 
    return 1;
    
}
int main()
{
    int n,m,i,f=1;
    printf("enter the number and its power\n");
    scanf("%d%d",&n,&m);
   i=power(n,m);
    printf("number = %d ",i);

    return 0;
}