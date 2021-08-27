//This is the program that print binary number takes input as decimal 
#include<stdio.h>
#include<math.h>
 long decimal(int a);
int main(){
    int a;
    __int64 b;
    printf("Enter the Number the  decimal number that you want to convert into binary or octal \n");
    scanf("%d",&a);
    b=decimal(a);
    printf(" %d ==%ld",a,b);
 
return 0;
}
long decimal(int a )
{
    int rem,sum=0,n=0;
    while (a>0)
    {
        rem=a%2;
        sum=sum+pow(10,n);
        a/=2;
        n++;

    }
    return sum;
    
}
