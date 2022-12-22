#include<stdio.h>
#include<string.h>
struct studentt
{
    char name[30];
    int rollno;
    int marks;
    char address[40];
};
int main()
{
    struct studentt x[5];
    for(int i=0;i<1;i++)
    {
        
        printf("\nenter the name\n");
                gets(x[i].name);
        
        printf("enter the ropll no amd marks");
        scanf("%d",&x[i].rollno);
        printf("enter the  marks");
        scanf("%d",&x[i].marks);
        getchar();
        printf("enter thr address of the student\n");
        gets(x[i].address);
    }
    for(int j=0;j<1;j++)
    {
        printf("\nname of the students : ");
        puts(x[j].name);
    
        printf("\nroll no. = %d marks = %d \n",x[j].rollno,x[j].marks);

        printf("address of the student\n");
        puts(x[j].address);
    }
    return 0;
}
