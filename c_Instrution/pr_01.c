// 
#include<stdio.h>

int main(){
int a,rem,rev=0;
printf("enter the number ");
scanf("%d",&a);
while (a!=0)
{
    rem=a%10;
    rev=rev*10+rem;
    a/=10;
}
printf("the reverve vlue of is %d",rev);
return 0;
}