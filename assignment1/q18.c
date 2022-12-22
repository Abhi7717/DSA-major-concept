// #include<stdio.h>
// int main()
// {
//     int i,j,b,n;
//     printf("enter the size of the array\n");
//     scanf("%d",&n);
//     int a[n];
//     printf("enter the elmemst of the array\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",(a+i));
//     }

//     printf("enterd elemests are: \n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",*(a+i));
//     }
//     return 0;
// }

// enter the size of the array
// 5
// 1
// 2
// 3
// 4
// 5
// enterd elemests are: 
// 12345
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\assignment1> 


#include<stdio.h>
int main()
{
    int i,j,b,n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the elmemst of the array\n");
   
       for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
           scanf("%d",(*(a+i)+j)) ;

    printf("enterd elemests are: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",*(*(a+i)+j));
    }
    return 0;
}