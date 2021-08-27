//
#include<stdio.h>
 
int main(){
int x=1,y=20;
switch (x)
{
    y=30;//why here the value of y is not changing why i don't know what happen here
case 1:
    y++;
    break;
case 2:
    y--;
    break;

default:
   y=y+2;
}
printf("Y is %d\n",y);
return 0;
}