/*question no.5*/
#include<stdio.h>

int main(){
    int a=5, b=5;
    printf("%i,%i\t",++a,b--);
    printf("%i,%i\t",a,b);
    printf("%i,%i\t",++a,b++);
    printf("%i,%i\t",a,b);
    return 0;
}