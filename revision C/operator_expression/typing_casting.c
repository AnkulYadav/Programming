//this is the program the demonstrate the type casting in C language
#include<stdio.h>
 
int main(){
    int  a, b;
    float c;
    printf ("Please enter two integer number ");
    scanf("%d%d",&a,&b);
    c= (float) a/b;
    printf("c = %f ",c);
 
return 0;
}