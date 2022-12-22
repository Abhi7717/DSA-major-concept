#include<stdio.h>
#include<string.h>
struct studentt
{
    char name[30];
    char gender[10];
    char desig[10];
    char depart[40];
    int basicpay;
};
// void insert(struct studentt *x);
// void display(struct studentt *x);
int main()
{
   
    int n;
    printf("enter the no. of employes\n");
    scanf("%d",&n);
    getchar();
     struct studentt x[n];
//     name, gender,      designation,
// department, basic pay
     for(int i=0;i<n;i++)
    {
        
        printf("\nenter the name\n");
                gets(x[i].name);
        
        printf("enter the gender\n");
        gets(x[i].gender);
        printf("enter the  designation\n");
        gets(x[i].desig);
        // getchar();
        printf("enter thr department\n");
        gets(x[i].depart);
         printf("enter thr basic pay\n");
        scanf("%d",&(x[i].basicpay));
        getchar();
    }
    // insert(x);
    // display(x);
    for(int j=0;j<n;j++)
    {
        printf("\nname of the employee : ");
        puts(x[j].name);
    
        printf("\ngender :\n");
         puts(x[j].gender);
        printf("\n  designation : \n");
        puts(x[j].desig);
        // getchar();
        printf("\n department : \n");
        puts(x[j].depart);
         printf("\n basic pay : \n");
        printf("%d",x[j].basicpay);
        float g=x[j].basicpay+(0.25*x[j].basicpay)+(0.75*x[j].basicpay);
        printf("\n gross pay : %f\n",g);
    }

    // Gross pay = basic pay + HR + DA HR=25% of basic and DA=75% of basic
        

    return 0;
}

// enter the no. of employes
// 2

// enter the name
// abhijit
// enter the gender
// male
// enter the  designation
// bregi
// enter thr department
// cse
// enter thr basic pay
// 400000

// enter the name
// abhijiiy
// enter the gender
// male
// enter the  designation
// boss
// enter thr department
// cse
// enter thr basic pay
// 50000000

// name of the employee : abhijit

// gender :
// male

//   designation :
// bregi

//  department :
// cse

//  basic pay :
// 400000
//  gross pay : 800000.000000

// name of the employee : abhijiiy

// gender :
// male

//   designation :
// boss

//  department :
// cse

//  basic pay :
// 50000000
//  gross pay : 100000000.000000
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\assignment1> 