//
#include<stdio.h>
 int fun(void);
int main(){
 int a=10;
 a=fun();
 printf("%d",a);
return 0;
}
int fun(void)
{
    printf("function\n");
}