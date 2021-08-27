//program to print the number of digit in the given number  
#include<stdio.h>
 
int main(){
    int a,count=0;
    printf("Enter the number\n");
    scanf("%d",&a);
    do
    {
          a=a/10;
        ++count;
     
    } while (a>0);
     printf("%d",count);

return 0;
}