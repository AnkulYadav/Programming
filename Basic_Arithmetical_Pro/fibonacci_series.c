//this is the program that print the fabonacci series
#include<stdio.h>
 
int main(){
 int a=0,b=1,c,d;
 printf("Enter the no of terms\n ");
 scanf("%d",&c);
 printf("%d\t",b);
 for (int i = 1; i < c; i++)
 {
     d=a+b;
    printf("%d\t",d);
    a=b;
    b=d;
 }
 
return 0;
}