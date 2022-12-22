#include<stdio.h>
int main()
{
    int n,i,j,k,r,r1,f=0,l;
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
     printf("enter the triple\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=1;i<a[0][2]+1;i++)
    {
        for(j=1;j<b[0][2]+1;j++)
        {
            if (a[i][1]==b[j][0])
            {
                if(a[i][0]!=a[i-1][0])
                {
                    f++;
                }
                if (a[i][0]==a[i-1][0])
                {
                    l=1;
                    for (int k=1;k<b[0][2]+1;k++)
                    {
                        if(a[i-1][1]==b[k][0])
                        l=0;
                    }
                    if(l==1)
                    f++;
                }
            }
        }
    }
    printf("%d",f);
    int c[f+1][3];
    k=1;
    for(i=0;i<=f;i++)
    c[i][2]=0;
    c[0][0]=a[0][0];
    c[0][1]=b[0][1];
    c[0][2]=f;
    for (i=1;i<=a[0][2];i++)
    {
        for (j=1;j<=b[0][2];j++)
        {
            if(a[i][1]==b[j][0])
            {
                c[k][0]=a[i][0];
                c[k][1]=b[j][1];
                if(a[i][0]==a[i-1][0])
                c[k-1][2]= c[k-1][2]+a[i][2]*b[j][2];
                else
                {
                    c[k][2]=a[i][2]*b[j][2];
                    k++;
                }
                printf("\n%d ",c[k-1][2]);
            }
        }
    }
    for(i=0;i<=f;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// infix to prefix
#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,j;
    char ch[10];
    printf("enter the expression\n");
    // getchar();
    gets(ch); 
    puts(ch);
}