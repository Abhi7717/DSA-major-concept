#include<stdio.h>
#include<string.h>
struct studentt
{
    char name[30];
    int rollno;
    int marks;
    char address[40];
};
void insert(struct studentt *x);
void display(struct studentt *x);
int main()
{
    struct studentt x[5];
    insert(x);
    display(x);
    return 0;
}

void insert(struct studentt *x)
{
    for(int i=0;i<5;i++)
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
}

void display(struct studentt *x)
{
    for(int j=0;j<5;j++)
    {
        printf("\nname of the students : ");
        puts(x[j].name);
    
        printf("\nroll no. = %d marks = %d \n",x[j].rollno,x[j].marks);

        printf("address of the student\n");
        puts(x[j].address);
    }
}