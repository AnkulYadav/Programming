//pointer airthmetic
#include<stdio.h>
 
int main(){
    int x;
    int a=1, *ptr=&a;
    char ch='A',*ptr1=&ch;
    float c=5.5, *ptr2=&c;
    printf("the address of value a is %u\n",ptr);
    printf("the address of value ch is %u\n",ptr1);
    printf("the address of value c is %u\n",ptr2);
    ptr++;
    ptr1=ptr1-5;
    ptr2--;
    printf("the address of value a is %u\n",ptr);
    printf("the address of value ch is %u\n",ptr1);
    printf("the address of value c is %u\n",ptr2);
    x=*ptr++;
    printf("the address of value a is %u\n",x);
    x=*++ptr;
    printf("the address of value a is %u\n",x);
    x=++*ptr;
    printf("the address of value a is %u\n",x);
    x=(*ptr)++;
    printf("the address of value a is %u\n",x);
return 0;
}