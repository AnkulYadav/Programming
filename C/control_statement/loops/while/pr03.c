/*program to print the sum of the digit of given no*/
#include<stdio.h>

int main(){
    int a,sum=0,rem,i=1;
    printf("Enter the number\n");
    scanf("%d",&a);
    while(a!=0){
    rem=a%10;
    sum=sum+rem;
    a=a/10;
 }
 printf("sum=%i",sum);
    return 0;
}