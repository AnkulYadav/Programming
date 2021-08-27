//non-zero value excuted as true and zero is excuede like flase in if 

//program find the quotient and remainder 
#include<stdio.h>
 
int main(){
 int a,b;
 printf("Enter the no.\n");
 scanf("%i%i",&a,&b);
 if(b)
 {
     printf("%d\n",a/b);
     printf("%d\n",a%b);
 }
 else
 {
     printf("denominator can't be zero\n");
 }
 
return 0;
}