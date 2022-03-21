//The  distance  between  two  cities  (in  km.)  is  input  through the keyboard.  Write  a  program  to  convert  and  print  this  distance  in meters, feet, inches and centimeters
//this is a program that convert distance in different units
#include<stdio.h>


int main(){
    int km;//the distance between two cities in km 
    int m,cm ;
    float feet ,inch;
    printf("enter the number between two cities\n");
    scanf("%d",&km);
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    feet=inch/12;
    printf("the %d(in meter))\n%d(in centimeters))\n%f(in inches))\n%f(in feet)\n",m,cm,inch,feet);


return 0;
}