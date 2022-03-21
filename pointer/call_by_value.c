//this is a program that demonstrate call by value
#include<stdio.h>
void value(int a,int b){
    a++;
    b++;
    printf("a=%d ,b=%d\n",a,b);
}
 
int main(){
    int a=5,b=6;
    printf("a=%d,b=%d\n",a,b);
    value(a,b);
    printf("a=%d,b=%d\n",a,b);
 
return 0;
}