//Question no .10
#include<stdio.h>
 
int main(){
    int x,y,z,k=10;
    k+=(x=5,y=x+2,z=x+y);
    printf ("x=%d ,y=%d , z=%d , k=%d\t ",x,y,z,k);

return 0;
}