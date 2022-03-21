//this is the program that accepts two no and if first no. > second no.then print the differnce of the no otherwise sum.
#include<stdio.h>
 
int main(){
    int a,b;
    printf("Enter the no\n");
    scanf("%i%i",&a,&b);
    printf("Answer=%i\t",(a>b)?a-b:a+b);

return 0;
}