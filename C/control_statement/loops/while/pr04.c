/*program to print the multiply of the digit of given no*/
#include<stdio.h>

int main(){
    int a,sum=1,rem,i=1;
    printf("Enter the number\n");
    scanf("%d",&a);
    while(a!=0){
    rem=a%10;
    sum=sum*rem;
    a=a/10;
 }
 printf("mul=%i",sum);
    return 0;
}