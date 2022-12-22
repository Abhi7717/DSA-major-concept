#include<stdio.h>
void sum(int *n,int *m)
{
  int s;
  s=*n+*m;
  printf("sum = %d",s);
}
int main()
{
    int n,m;
    printf("enter the two number\n");
    scanf("%d%d",&n,&m);
    sum(&n,&m);

    return 0;
}

// enter the two number
// 4
// 5
// sum = 9
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa3> 

