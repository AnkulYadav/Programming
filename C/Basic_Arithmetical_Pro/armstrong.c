//this is a program that print the armstrong number 
#include<stdio.h>
 
int main(){
int num,n,cube ,rem,sum=0;
for ( num = 100; num <=999; num++)
{
   
    n=num;
    while (num>0)
    {
        
        rem=num%10;
        num/=10;
        cube=rem*rem*rem;
        sum+=cube;
    }
    
    if (n==sum)
    {
        printf("Armstrong no is :%d\n",num);
    }
    
}
 
return 0;
}