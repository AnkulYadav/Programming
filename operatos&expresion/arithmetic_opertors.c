/*this program tells us about the all arithmaetc operator*/

#include<stdio.h>
 
int main(){
    int z=-2;
    z=-z;//unary operator that change the sign of the variable
    printf("the value %i",z);
   

   //binary arithmatic operator (+,-,*,/,%)hint %only use with integer value
   int a=12,b=4;
   printf("sum=%i\n",a+b);
   printf("subtration=%i\n",a-b);
   printf("multiplication=%i\n",a*b);
   printf("divide=%i\n",a/b);
   printf("remainder=%i\n",a%b);
 

 //incremnt and decrement operator
 int x=5;
 printf("a=%d\n",++x);
 printf("a=%d\n",--x);
 printf("a=%d\n",x++);
 printf("a=%d\n",x--);
 printf("a=%d\n",x);
 printf("a=%d\n",x);

//type casting
float asd=23.0,as=4.0,asdf;
asdf=(int)asd/as;
printf("%d",asdf);

return 0;
}