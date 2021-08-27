// 
#include<stdio.h>

int main(){
int i,sum=0,rem;
printf("enter the no .");
scanf("%d",&i);
while (i!=0)
{
  
rem=i%10;
sum=sum+rem;

i/=10;
}
printf("the sum of the digits=%d",sum);

return 0;
}