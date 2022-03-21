// The Program that print the summation of numbers from 1 to n
// 1+2+3+4+5+6+7+8+9
#include<stdio.h>
 int sum(int );
 int display(int );
int main(){
int n;
printf("Enter the number.\n");
scanf("%d",&n);
if (n<0)
{
    printf("please enter the +ve number \n");

}
else
{
    display(n);
    printf("= %d\n",sum(n));
    
}
 
return 0;
}
int sum(int a)
{
    if ( a==0)
    {
       return 0;
    }
    return ( a + sum(a-1));
    
}
int display( int a)
{
    if (a==0)
    {
        return ;
    }
    printf("%d+",a);
    display(a-1);
    
}