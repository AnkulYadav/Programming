/*this is the program for print the sum of two number by using the function*/
#include<stdio.h>
int sum();

int main(){
    int a,b,c;
    printf("Enter the number .\n");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("the sum is =%d \n",c);

    return 0;
}
int sum( int x,int y)
{
    int z;
   z=x+y;
   return z;
}