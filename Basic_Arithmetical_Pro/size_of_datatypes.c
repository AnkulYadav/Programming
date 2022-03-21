//this the program thar print the size of the different data types 
#include<stdio.h>
 
int main(){
 int a;
 char b;
 double c;
 float d ;
 long e;
 short f ;
 long double g;
 double h ;
 long long int i;
 printf("the size int %d\n",sizeof(a));
 printf("the size char  %d\n",sizeof(b));
 printf("the size double%d\n",sizeof(c));
 printf("the size float %d\n",sizeof(d));
 printf("the size long %d\n",sizeof(e));
 printf("the size short %d\n",sizeof(f));
 printf("the size long double %d\n",sizeof(g));
 printf("the size double %d\n",sizeof(h));
 printf("the size long long int %d\n",sizeof(i));
return 0;
}