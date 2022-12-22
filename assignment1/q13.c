#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("enter the number\n");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the elemnets of the array\n");
    for ( i = 0; i <n ; i++)
    {
        /* code */
        for ( j = 0; j <n; j++)
        {
            /* code */
            scanf("%d",&a[i][j]);
        }
        
    }
     printf("enter the elemnets of the array\n");
    int b[n][n];
     for ( i = 0; i <n ; i++)
    {
        /* code */
        for ( j = 0; j <n; j++)
        {
            /* code */
            scanf("%d",&b[i][j]);
        }
        
    }
    // for ( i = 0; i <n ; i++)
    // {
    //     /* code */
    //     for ( j = 0; j <n; j++)
    //     {
    //         /* code */
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }
    int c[n][n],sum;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=0;
            for(k=0;k<n;k++)
            {
                sum+=a[i][k]*b[k][j];
                c[i][j]=sum;
                
            }

        }
    }
printf("multiplied array : \n");
    for ( i = 0; i <n ; i++)
    {
        /* code */
        for ( j = 0; j <n; j++)
        {
            /* code */
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    
}