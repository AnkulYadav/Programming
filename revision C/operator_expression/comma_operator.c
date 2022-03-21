//this is the program to demonstrate the comma operator
#include<stdio.h>
 
int main(){
 int a, b, c, sum=0;
 sum = (a=8,b=7,c=9,a+b+c);
 printf("sum = %d ",sum);
return 0;
}