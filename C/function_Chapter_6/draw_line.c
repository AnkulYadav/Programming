/*this is the program that print a straight line in the console*/
#include<stdio.h>
void drawline(void);

int main(){
    drawline();
    return 0;
}
void drawline(void){
 int a;
 for(a=1;a<=20;a++)
 printf("_");
}