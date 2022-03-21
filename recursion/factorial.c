//
#include<stdio.h>
 int fact(int );

int main(){
 int a;
 printf("Enter the number .\n");
 scanf("%d",&a);
 if (a<0)
 {
     printf("no facttorial for -ve number.\n");
 }
 else
 {
     printf("%d!=%d",a,fact(a));
 }
 
return 0;
}
int fact(int a)
{
    long f=1;
    if (a==0)
    {
        return 1;
    }
         return (a *fact(a-1));
    
}
