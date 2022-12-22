#include<stdio.h>
void swap(int *a,int *b,int *c)
{
	int t;
	t=*c;
    *c=*b;*b=*a;
	*a=t;
}
int main()
{
	
	int a,b,c;
	printf("Enter 3 integers :\n");
	scanf("%d %d %d",&a,&b,&c);
	swap(&a,&b,&c);
	printf("a = %d\nb = %d\nc = %d",a,b,c);
	return 0;
}

// Enter 3 integers :
// 1
// 2
// 3
     
// a = 3
// b = 1
// c = 2
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\cse_dsa3> 