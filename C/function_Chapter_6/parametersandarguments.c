/*
Parameters:-parameters are mentioned in the function definition and they are hold the value that are send to the calling function.
argumrnts:-the variables that are send to the calling function is know as the arguments

*/
//
#include<stdio.h>

 int num(int a,int b);

int main(){
    int a,b;
    printf("Enter the two numbers .\n");
    scanf("%d%d",&a,&b);
    num(a,b);
    printf("a=%d and b=%d\n",a,b);

return 0;
}
int num(int x,int y)
{
    x++;
    y++;
    printf("a=%d and b=%d\n",x,y);
}