//pointer to pointer 
#include<stdio.h>
 
int main(){
    int a=10,*ptr=&a,**pptr=&ptr;
    printf("value of a is %d\n",**pptr);
    printf("address of a is %d\n",*pptr);
    printf("address of a is %d\n",&a);
    printf("value at ptr is %d\n",*pptr);
    printf("address of ptr is %d\n",pptr);
    printf("address of ptr is %d\n",&ptr);
    printf("value of ptr is %d\n",pptr);
    printf("address of pptr is %d\n",&pptr);
 
return 0;
}