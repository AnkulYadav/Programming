//returning more than one value from a function using call by reference
#include<stdio.h>
void func(int x,int y,int *ptr,int *ptr1,int *ptr2){
    *ptr=x+y;
    *ptr1=x-y;
    *ptr2=x*y;
} 
int main(){
   int a,b,sum,diff,prod;
   a=6,b=4;
   func(a,b,&sum,&diff,&prod);
   printf("Sum=%d Difference=%d Product=%d\n",sum,diff,prod);
return 0;
}