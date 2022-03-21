//program to access the variable through pointer(*) this asterisk called value at operator
#include<stdio.h>
 
int main(){
int a=12341,*iptr=&a,c;
printf("address of a : %u \nand value at a is :%d\n",iptr,*iptr);
(*iptr)++;
 printf("address of a : %u \nand new value at a is :%d\n",iptr,*iptr);
c= *iptr+10;
 printf("address of a : %u \nand new value at a is :%d and \nafter using expression:%d\n",iptr,*iptr,c);
return 0;
}