//function calling 
#include<stdio.h>
 int sum(int a,int b);
int main(){
 int a=10 ,b=20,k;
 k=sum(a,b);
 printf("sum=%d\n",k);
 k=sum(4,5);
 printf("sum=%d\n",k);
 k=sum(5,95);
 printf("sum=%d\n",k);
 k=sum(6,34);
 printf("sum=%d\n",k);

return 0;
}
int sum( int x,int y)
{
    int z;
    z=x+y;
    return z;
}