//this is a program that tells us about area & circumfrence of the circle 
#include<stdio.h>
#define pi 3.1423
int main(){
    float r,area, cir;
    printf("Enter the radius of the circle \n");
    scanf("%f",&r);
    printf("area=%0.3f \t circumfrence=%0.3f\n",pi*r*r,2*pi*r);
    return 0;
}