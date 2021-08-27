// this is the program that print the sum of the first natural numbers
#include<stdio.h>

int main(){
int i,sum=0,n;
printf("enter the number .");
scanf("%d",&n);
for ( i = 1; i <=n ; i++)
{
   sum=sum+i;
}
printf("the sum first %d natural numbers is %d",n,sum);
return 0;
}