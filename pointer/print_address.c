// program to print address of variables using address operator
#include<stdio.h>
 
int main(){
    int a=20;
    float b=23.234;
    double c=1234.234;
    printf("address of a is :%p",&a);
    printf("\naddress of b is :%p",&b);
    printf("\naddress of c is :%p",&c);
 
return 0;
}