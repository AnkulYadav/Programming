// this is the program that takes binary as input and give decimal as output
#include<stdio.h>
#include<math.h>
long int binary(int a);
int main(){
 long int a,b;
 printf("Enter the Binary NO.\n");
 scanf("%ld",&a);
 b=binary(a);
 printf("%ld ==%ld\n",a,b);
return 0;
}
long int binary(int a)
{
    int rem,sum=0,n=0;
    while (a>0)
    {
        rem=a%10;
        sum=sum+pow(2,n);
        a/=10;
        n++;
    }
    return sum;
    
}