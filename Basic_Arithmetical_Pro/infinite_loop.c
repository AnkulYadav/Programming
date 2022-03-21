// this the program that tells we don't have to miss condition in loops 
#include<stdio.h>
 
int main(){
 for (int  i = 0; i < 10; i++)
 {
     printf("Enter the %i\n",i);
     if (i==1)
     break;
 }
 
return 0;
}