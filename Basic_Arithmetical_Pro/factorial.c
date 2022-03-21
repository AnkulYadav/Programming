//This the program that print the factorial of a given number 
#include<stdio.h>
 
int main(){
 int a,fact=1;
 printf("Enter the number \n");
 scanf("%d",&a);
 if (a<0)
 {
     printf("Please enter the positive no.\n");
     return 0;
 }
 for (int i = a; i >=0 ; i--)
 {
    if (i==0 || i==1 )
    {
        printf("factorial =%i\n",fact);
        break;
    }
    else
    {
        fact=fact*i;
    }
 }
 
return 0;
}