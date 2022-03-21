//Guess the output of the following program
#include<stdio.h>
 int func(void );
int main(){
 int x=10;
 x=func();
 printf("%d\n",x);
return 0;
}
int func(){
    printf("Function\n");
}