// 
#include<stdio.h>
#include<math.h>

int main(){
float x,y,r,t,n;
printf("enter the value of x and y ");
scanf("%f%f",&x,&y);
r=sqrt(pow(x,2)+pow(y,2));

t=atan(y/x );
printf("the polar form of the co-ordinate is that (%f,%f)",r,t);

return 0;
}