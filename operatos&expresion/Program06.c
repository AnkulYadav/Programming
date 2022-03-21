//Question no.6
#include<stdio.h>
 
int main(){
    int x,y,z;
    x=8++;
    y=++x++;
    z=(x+y)--;
    printf("x=%i ,y=%d z=%d",x,y,z);
return 0;
}