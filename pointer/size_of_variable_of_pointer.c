//
#include<stdio.h>
 
int main(){
 int n;
 printf("Entet the number \n");
 scanf("%d",&n);
 if ((n%4==0 && n%400==0) || (n%100==0 && n%400==0) )
 {
     printf("hi");
 }
 else
 {
     printf("bye");
 }
 
 
return 0;
}