//program to assign the address to a pointer 
#include<stdio.h>
 
int main(){
    int *iptr,age=40,**p1=&iptr;
    float *fptr,height=2.23;
    printf("before assignment of pointer the address of is %u and %u  and %u\n ",iptr,fptr,p1);
    iptr=&age;
    fptr=&height;
    printf("after assignment of pointer the address of is %u and %u and %u %d %d\n",iptr,fptr,p1,*p1,**p1);//here *pointer name is know as value at 
return 0;
}