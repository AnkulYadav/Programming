// this is the program to print the factorial of a given number.//

#include<stdio.h>
long int factorial(int n);

int main(){
    int n;
    printf("Enter the number .\n");
    scanf("%d",&n);
    if (n<0)
    {
        printf("Please enter the number greater then 0 or Enter +ve number.\n ");
    }
    else
    {
        printf("The factorial of %d is %d \n",n,factorial(n));
    }
    
    return 0;
}
long int factorial(int a)
{
    int i;
    long int fact=1;
    if (a==0)
    {
        return 1;
    }
    for ( i = a; i >1; i--)
    {
        fact*=i;
    }
    return fact;
    
    
}