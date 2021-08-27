//print the table of any number
#include<stdio.h>
 
int main(){
    int a,b=1;
    printf("Enter the no\n");
    scanf("%i",&a);
    while (b<=10)
    {
        printf("%d*%i=%i\n",a,b,a*b);
        b++;
    }
return 0;
}