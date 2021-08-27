//
#include<stdio.h>
 
int main(){
int a=5;
begin:
if(a)
{
    printf("%d\n",a);
    a--;
    goto begin;
}
return 0;
}