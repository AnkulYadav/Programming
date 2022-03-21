//this is a program that print the value and ASCII code of all charcter in C
#include<stdio.h>
 
int main(){
char a;
for(int i =0;i<256;i++)
{
    printf("%c AXCII value %d\n",i,i);//where /n is a escape sequences /execution charcter 
    /* \b - backspace 
       \a -alert 
       \r -carriage return -moves the cursor to beginning of the current line 
       \n -new line
       \t -tab
       \f-form feed -moves the cursor to the initial position of the next logical page 
       \0 -null 
       \v -vertical tab - move the cursor to the next vertical line 
       \'- to print '
       \\- to print \
       \" - to print "
       */
}
return 0;
}