//this program tells me about reading  input 
#include<stdio.h>
 
int main(){
    //reading integer number
    int a;
    printf ("Enter the integer number.\n");
    scanf("%i%*d",&a,&a);//in this line there is two concepts 1.the value will overwrite by the latest assignment and the previous value will destroy if the star is place between the % and type specifier ke bech me to input to liya jayega kintu uski value assign nahi iki jayegi .
    printf("The value you Entered %d=%i\ndecimal change into octal %o\ndecimal change into heaxdecimal %X\n ",a,a,a,a);

    /* Reading Floating Point Number */
    float f;
    printf("Enter the floating point number\n");
    scanf("%f",&f);
    printf("the value you entered is %f\n",f);


    /*Reading the charcter value */
    char c;
    printf("enter the charcter value\n ");
    scanf("% c",&c);
    printf("%c\n", c);
return 0;
}