// 
#include<stdio.h>
#include<math.h>

int main(){
float a,b,c,area,s;
printf("enter the side of triangles .");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("the area of triangle is %f",area);
return 0;
}