#include<stdio.h>
#include<strings.h>
int main()
{
    char s[30],s1[30];
    int n,i,flag=0;
    printf("enter the string\n");
    gets(s);
    // getchar();
    int k=0;
    for(i=strlen(s)-1;i>=0;i--)
    {
        s1[k]=s[i];
       
        // printf("%c",s1[k]);
     k++;
    }
    for(i=0;i<strlen(s);i++)
    {
    if(s1[i]==s[i])
      {  
      flag++;
    //   printf("%c",s1[i]);
      }
    else
    flag =0;
    }
    if(flag>1)
    printf("its a palindrom string\n");
    else
    printf("not a palindrom string");
    
}