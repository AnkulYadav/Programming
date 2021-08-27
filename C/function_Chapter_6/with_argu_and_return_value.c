//this is the function with argument and with retrun value

#include<stdio.h>

 int num (int a,int b);

int main(void){
    int a,b,c;
    printf("Enter the two numbers .\n");
    scanf("%d%d",&a,&b);
    c=num(a,b);

    printf("a=%d and b=%d and  a*b=%d\n",a,b,c);

return 0;
}
int num(int x,int y)
{
    int a;
    a=x*y;
    return a;
}