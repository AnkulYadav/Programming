//program to convert decimal into binary
#include<stdio.h>
 
int main(){
    int a,rem;
    printf("Enter the no.");
    scanf("%d",&a);
    while (a!=0)
    {
       rem=a%2;
       a=a/2;
       printf("%d",rem); 
    }
    

return 0;
}