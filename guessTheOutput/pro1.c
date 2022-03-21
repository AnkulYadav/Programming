//Guess the output of the following program
#include<stdio.h>
 
int main(){
int a;
a=func(1,2);
printf("%d\n",a);
a=func(1,2,3,4);
printf("%d\n",a); 
return 0;
}
int func(int a,int b,int c){
    return a+b+c;
}