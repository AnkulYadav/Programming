//Guess the Output of the following program
#include<stdio.h>
 int sum (int a, int b);
 int multiple (int a, int b);
int main(){
 int a=6,b=3;
 printf("%d\t",multiple(a,b));
 printf("%d\t",multiple(15,4));
 printf("%d\t",multiple(a+b,a-b));
 printf("%d\t",multiple(6,sum(a,b)));
return 0;
}
int multiple(int a, int b){
    return a*b;
}
int sum(int a, int b){
    return a+b;
}