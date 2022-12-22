#include<stdio.h>
 int gcd(int m,int n)
     {
          while(m!=n)
         {
             if(m>n)
             m=m-n;
             else
             n=n-m;
         }
         return m;
    }
    int main()
     {
         
         int n,m;
         printf("enter the 2 number for GCD ");
        scanf("%d",&n);
        scanf("%d",&m);
         int k=gcd(n,m);
            printf("the gcd is %d",k);
    }
    
             