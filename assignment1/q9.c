#include<stdio.h>
int main()
{
    int i,j,m;
    printf("enter two  number a and b\n");
    scanf("%d%d",&i,&j);
    i=i*j;
    j=i/j;
    i=i/j;
    printf("a = %d b = %d",i,j);
    return 0;
}