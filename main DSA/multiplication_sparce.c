#include<stdio.h>
void transpose(int b1[][3],int b2[][3])
{
int i,j,k,n;
b2[0][0]=b1[0][1];
b2[0][1]=b1[0][0];
b2[0][2]=b1[0][2];
k=1;
n=b1[0][2];
for(i=0;i<b1[0][1];i++)
for(j=1;j<=n;j++)
//if a column number of current triple==i then insert the current triple in b2
if(i==b1[j][1])
{
b2[k][0]=i;
b2[k][1]=b1[j][0];
b2[k][2]=b1[j][2];
k++;
}
}
int main()
{
    int n,i,j,k,r,r1,c,c1;
    printf("enter the rows of triplet\n");
    scanf("%d",&r);
    // printf("enter the column of triplet\n");
    // scanf("%d",&c);
    int a[r][3];
    printf("enter the triple\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the rows of triplet2\n");
    scanf("%d",&r1);
    int b[r1][3];
    // printf("enter the rows of triplet2\n");
    // scanf("%d",&c1);
     for(i=0;i<r1;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int *c=(int *)malloc(3*sizeof(int));
    //  tranpose of the 2nd matrix
    transpose(b,c);

    printf("the matrx entered\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }


    printf("the matrx entered\n");
     for(i=0;i<r1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
}