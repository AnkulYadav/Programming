//this program convert kilometer into meter, centimeter,inches, feet 
// Date :-18/03/2021
//Author :- Ankul Yadav   
#include<stdio.h>

int main(){
    float a;
    printf("enter the distance between two cities.\n");
    scanf("%f",&a);
    printf("The Distance between the cities is = %0.3f(in centimeter)\n",a*100000);
    printf("The Distance between the cities is = %0.3f (in feet)\n",a*5000000/1524);
    printf("The Distance between the cities is = %0.3f (in inches)\n",a*5000000/127);
    printf("The Distance between the cities is = %0.3f (in meter)\n",a*1000);

return 0;
}