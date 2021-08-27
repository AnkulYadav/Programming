//
#include<stdio.h>
 
int main(){
 int a, b, c, d, e;
 printf("armstrong number is :\n");

 for ( a = 1; a <= 300; a++)
 {
     b=a;
     c=0;
     while(a>0)
     {
         d=a%10;
         e=d*d*d;
         c=c+e;
         a=a/10;
     }
     if (b==c)
        printf("%d\n",b);
     
     
 }
 
return 0;
}