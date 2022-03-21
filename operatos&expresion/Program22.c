//changeg decimal into octal and hexadecimal
#include<stdio.h>
 
int main(){
    int a;
    printf("Enter the number to convert into octal and hexadecimal\n");
    scanf("%i",&a);
    printf("decimal : %i\n",a);
    printf("Octal: %o\n",a);
    printf("hexadecimal : %x\n",a);
    printf("hexadecimal : %X\n",a);

return 0;
}