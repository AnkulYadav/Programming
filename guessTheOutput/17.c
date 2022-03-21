//
#include<stdio.h>
 
int main(){
 int x,y;
 printf("enter the value of y .\n");
 scanf("%d",&x);
 if (x==1)
 {
     y=x+1;
     printf("The value of y is = %d\n",y);
 }
 else if (x==2)
 {
    y=0;
    x=0;
    printf("The value of y is = %d\n",y);
 }
 else  if (x==3 || x==4 || x==5)
 {
    y++;
    printf("The value of y is = %d\n",y);
 }
 else if (x==6)
 {
    y+=4;
    printf("The value of y is = %d\n",y);
 }
 else
 {
     y--;
     printf("The value of y is = %d\n",y);
 }
 
 
 
 
return 0;
}