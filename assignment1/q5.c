#include<stdio.h>
int main()
{
    int i,j,n,a,b,sum=0,sub,m;
    float d,r;
    do{
    printf("press 1. add\n");
    printf("press 2.substract\n");
    printf("press 3.multiplication\n");
    printf("press 4.division\n");
    printf("press 5.remainder\n");
    printf("press 0.exit\n");
    printf("eneter your choice\n");
    scanf("%d",&n);
     
    switch (n)
    {
    case 1:
    
        printf("enter the two number to perform addition\n");
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("sum = %d",sum);
        break;
    case 2:
         
        printf("enter the two number to perform substrat\n");
        scanf("%d%d",&a,&b);
        sub=a-b;
        printf("sub = %d",sub);
        break;  
    case 3:
                printf("enter the two number to perform multiplt\n");
        scanf("%d%d",&a,&b);
        m=a*b;
        printf("multiplication = %d",m);
        break;

    case 4:
    
        printf("enter the two number to perform division\n");
        scanf("%d%d",&a,&b);
        d=(float)a/b;
        printf("div = %f",d);
        break;
    case 5:
           printf("enter the two number to find reminder\n");
        scanf("%d%d",&a,&b);
        r=a%b;
        printf("rem = %f",r);
        break;
    default:
    printf("wrong choice ..");
        break;
    }
   }while(n!=0);
    return 0;
}