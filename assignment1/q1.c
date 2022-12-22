// #include<stdio.h>
// int main()
// {
//     int i,j,n,f=1,p;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     p=n;
//     for ( i = p; i>=1; i--)
//     {
//         /* code */
//         f*=i;
//     }
//     printf("factorial = %d",f);
//      return 0;

// }


#include<stdio.h>
 int factorial(int n){
 int p=n,f=1,i;
    if (n>0)
    {
        return n*factorial(n-1);
    }
    else
    return 1;
    }
int main()
{
    int i,j,n,f=1,p;
    printf("enter the number\n");
    scanf("%d",&n);
   f=factorial(n);
    printf("factorial = %d",f);
     return 0;

}