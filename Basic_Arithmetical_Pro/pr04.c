/*Temperature of a city i Fahrenheit degrees is input through the keyboard.Write  a  program  to  convert  this  temperature  into Centigrade degrees.*/
#include<stdio.h>


int main(){
    float i,c;
    printf("Enter the temperture of the city in fahrenheit: \n");
    scanf("%f",&i);
    //formula change temperature c/5=f-32/9=k-273/5
    printf("The Temperture of the city in %0.3f Centigrade\n ",(i-32)*5/9);
    //fahrenheit to kalvin
    printf("The Temperture of the city in %0.3f Kalvin \n ",((i-32)*5/9)+273);

return 0;
}