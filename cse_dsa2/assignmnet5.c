#include<stdio.h>
int main()
{
    int i,n,j,k;
    printf("enter the size of the array\n");
    scanf("%d",&n);

    int p=n;
    int a[n][n];
    printf("enter the element is the array\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
         scanf("%d",&a[i][j]);   

        }
        
        
    }
    int c[n][n];
    
     for ( i = 0; i < n/2; i++)
    {
    
        for ( j = 0; j < n; j++)
        {
    
        c[i][j]=a[i][j];
        a[i][j]=a[p-1][j];
        a[p-1][j]=c[i][j];
        
        }
        p--;
    }
    

     
     
     
     printf("swaped matrix \n");
    // int c[n][n];
     for ( i = 0; i < n; i++)
    {
        // p=n;
        for ( j = 0; j < n; j++)
        {
         printf("%d  ",a[i][j]);   
        
        }
        printf("\n");
        
    }



    
}


// enter the size of the array
// 4
// enter the element is the array
// 1
// 2
// 3
// 4

// 5
// 6
// 7
// 8

// 9
// 10
// 11
// 12


// 13
// 14
// 15
// 16
// swaped matrix 
// 13  14  15  16
// 9  10  11  12
// 5  6  7  8
// 1  2  3  4
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa2> 