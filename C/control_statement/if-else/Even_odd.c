//program to print even and odd numbers 
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number that you want to check is even or odd\n");
    scanf("%i",&a);
    if(a%2==0){
        printf("the number is even\n");
    }
    else
    {
        printf("the number is odd\n");
    }
    
    return 0;
}