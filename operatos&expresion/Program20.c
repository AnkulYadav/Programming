//this is a pkrogram that take value in Celius return in fahrenheit
#include<stdio.h>
 
int main(){
    float c,f;
    printf("enter the value of temperature in Celius \n");
    scanf("%f",&c);
    f=((c*9)/5+32);
    printf("the temperature in fahrenheit %0.3f",f);

return 0;
}