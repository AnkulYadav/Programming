//break statement is used to terminate or get control out of  the loops
//continue statement is used to skip the some specific part of the loops 
#include<stdio.h>
 
int main(){
int n;
for(n=1;n<=5;n++)
{
    if (n==2)
    {
        continue;
    }
    if(n==5)
    break;
    printf("%d\n",n);
}
return 0;
}