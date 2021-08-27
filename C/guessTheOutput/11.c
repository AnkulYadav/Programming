//
#include<stdio.h>
 
int main(){
 int x,y=2;
 printf("Enter the value of X.\n");
 scanf("%d",&x);
 if (x==0)
 {
     y++;
     printf("The value of y is %d\n",y);
 }
 else if (x>0)
 {
     y--;
    printf("The value of y is %d\n",y); 
 }
 else
 {
     y+=2;
     printf("The value of y is %d\n",y);
 }
 
 
return 0;
}