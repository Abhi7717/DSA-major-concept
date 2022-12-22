#include<stdio.h>
int main()
{
    int i,n,x,y,c=0,d=0,z=0;
 printf("enter the size of the array\n");
 scanf("%d",&n);
 int ar[n];   
 printf("enetr the element of the array\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&ar[i]);

}

printf("enter the lower and upper limit of the array\n");
scanf("%d %d",&x,&y);

for(i=0;i<n;i++)
{
    if(ar[i]!=x )
    {
        c++;
        
    }
    else
    break;
}
for(i=0;i<n;i++)
{
    if(ar[i]!=y)
    {
        d++;
        
    }
    else
    break;


}
// printf("c = %d  d = %d \n",c,d);
for(i=c;i<=d;i++)
{
    z++;
}
printf("the minimum distance between %d and %d are = %d",ar[c],ar[d],(z-1));


}

// enter the size of the array
// 12
// enetr the element of the array
// 3
// 5
// 4
// 2
// 6
// 5
// 6
// 6
// 5
// 4
// 8
// 3
// enter the lower and upper limit of the array
// 3
// 6
// the minimum distance between 3 and 6 are = 4
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa2>