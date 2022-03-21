#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the number .\n");
    scanf("%d%d",&a,&b);
    printf("\nThe sum of %d and %d is %d",a,b,a+b);
    printf("\nThe subtraction of %d and %d is %d",a,b,a-b);
    printf("\nThe multiplication of %d and %d is %d",a,b,a*b);
    printf("\nThe devide of %d and %d is %d",a,b,a/b);
    printf("\nThe remainder of %d and %d is %d",a,b,a%b);
    return 0;
}