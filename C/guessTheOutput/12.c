//
#include<stdio.h>
 
int main(){
 char ch;
 int marks;
 printf("Enter the marks and grade \n");
 scanf("%c%d",&ch,&marks);
 if (ch=='A')
       if(marks>95)
       printf("excellent\n");
else
printf("work hard for getting A grade\n");
 
return 0;
}