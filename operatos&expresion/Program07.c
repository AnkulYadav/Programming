//question no. 7
#include<stdio.h>
 
int main(){
    int a=4,b=8,c=3,d=9,z;
    z=a++ + ++b * c-- - --d;
    printf("a=%d b=%d c=%d d=%d z=%d\t",a,b,c,d,z);

return 0;
}