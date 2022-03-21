//this is the program  funtion with argument but no return value 

//
#include<stdio.h>
 void fun(int a,int b);
int main(){
 int a,b;
 printf("Enter the two number.\n");
 scanf("%d%d",&a,&b);
 fun(a,b);
return 0;
}
void fun(int x,int y ){
    int z;
    z=x*y;
    printf("multiplication = %d \n",z);
}