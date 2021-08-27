// this is the function with no argument but with return value
// this program return the sum of square of all odd numbers from 1 to 25 
#include<stdio.h>
 int fun(void);
int main(){
 printf("%d\n",fun());
return 0;
}
int fun(void){
    int i, a=0;
    for(i=1;i<=25;i++)
    {
        if(i%2!=0)
        a+=i*i;
    }
  return a;
}