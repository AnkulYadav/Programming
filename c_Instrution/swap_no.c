//swap the value with without third variable 
#include<stdio.h>

int main(){
int a,b;
printf("enter the no. ");
scanf("%d%d",&a,&b);
printf("the a=%d and b=%d\n",a,b);
a=a-b;
b=a+b;
a=b-a;
printf("the a=%d and b=%d\n",a,b);
return 0;
}