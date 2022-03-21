//
#include<stdio.h>
 void func1(void);
 void func2(void);
 int a,b=6;
int main(){
    printf(" (inside the main func) a=%d & b=%d \n",a,b);
    func1 ();
    func2 (); 
return 0;
}
void func1(void){
    int a=5,b=10;
      printf(" (inside the  func1) a=%d & b=%d \n",a,b);
}
void func2(void){
    
      printf(" (inside the  func2) a=%d & b=%d \n",a,b);
}