//
#include<stdio.h>
 void func(void);

int main(){
  func();
  func();
  func();
  func();
return 0;
}
void func(void)
{
    int a=10;
    static int b=12;
    printf("static variable not initialized in every run\n a=%d & b=%d \n",a,b);
    a++;
    b++;
}