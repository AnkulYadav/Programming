//
#include<stdio.h>
 
int main(){
int a=0,b=0;
if (!a)
{
    b=!a;
    if (b)
     a=!b;
    
}
printf("%d,%d\n",a,b);
return 0;
}