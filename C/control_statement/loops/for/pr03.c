//program to print the to print the sum of 1+2+4+7+11+16+..............
#include<stdio.h>
 
int main(){
int i,n,term=1,sum=0;
printf("Enter number of term ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  sum+=term;
  term=term+i;
}
printf("the sum of series upto %d terms is %d\n",n,sum);
return 0;
}