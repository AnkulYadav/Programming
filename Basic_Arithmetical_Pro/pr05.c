/* )The  length andbreadth  of  a  rectangle  and  radius  of  a  circle  are input through the keyboard.  Write a program to calculate the area andperimeter of the rectangle, and the area andcircumference of the circle*/
/*****This is a program  that print the value of area and perimeter of a rectangle and circle****/

#include<stdio.h>


int main(){
    int a,b;//a=length b=width ,per=perimeter
    float radius ,pi=3.14;
    printf("Enter the height aur width of a rectangle \n");
    scanf("%d%d",&a,&b);
    printf("Rectangle:");
    printf("Area=%d \nPerimeter=%d \n",a*b,2*(a+b));
    printf("Enter the Radius of Circle\n");
    scanf("%f",&radius);
    printf("Circle:");
    printf("Area=%0.3f \nPerimeter=%0.3f \n",pi*radius*radius,2*pi*radius);

return 0;
}