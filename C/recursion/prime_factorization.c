// This is the program that print the prime factors of any given number
#include<stdio.h>
void factor(int ); 
int main(){
    int num;
    printf("Enter the Number .\n");
    scanf("%d",&num);
    factor(num);
return 0;
}
void factor(int num){
    int i=2,k=num;
    if (num==1)
    {
        return;
    }
    while (num%i !=0)
    {
        i++;
    }
    printf("%d\t",i,k);
    factor(num/i);
    
}