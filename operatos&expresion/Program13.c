//Question no 13
#include<stdio.h>
 
int main(){
   int a,b,c,d;
   a=b=c=d=4;
   a*=b+1;
   c+=d*=3;
   printf("a=%d, c=%d \t",a,c);
return 0;
}