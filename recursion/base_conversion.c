//This is the Program that convert a positive decimal number to Binary, Ocatal and Hexa-decimal as per user requirement
#include<stdio.h>
void convert(int, int);
int main(){
    int num,base;
    printf("Enter a positive decimal number and Please Enter the Base (2,8,16)\n");
    scanf("%d%d",&num,&base);
    convert(num,base);
    return 0;
}
void convert(int num,int base){
    int rem=num%base;
    if (num==0)
    {
        return;
    }
    convert(num/base,base);
    if (rem<10)
    {
        printf("%d",rem);
    }
    else
    {
        printf("%c",rem-10+'A');
    }
    
    
    
}