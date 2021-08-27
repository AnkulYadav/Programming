//this the program that finds the LCM and HCF
#include<stdio.h>
 
int main(){
 int a,b,x,y;
 printf("Enter the two number .\n");
 scanf("%d%d",&a,&b);
  x=a,y=b;
  while (x!=y)
  {
      if (x<y)
      {
          x=x+a;
      }
      else
      {
          y=y+b;
      }
      
  }
  printf("The lcm of %d and %d number is %d \n",a,b,x);
    x=a,y=b;
  while (x!=y)
  {
      if (x>y)
      {
          x=x-y;
      }
      else
      {
          y=y-x;
      }
      
  }
   printf("The hcf of %d and %d number is %d \n",a,b,x);
return 0;
}