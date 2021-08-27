//find the factorial of the number 
#include<stdio.h>

int main(){
    int a,fact=1;
    printf("Enter the number\n");
    scanf("%d",&a);
    if (a==1 ||a==0)
    {
    
    }
    else
    {
        while (a>=1)
        {
           fact=fact * a;
           a--;
        }
        
    }
    printf("fact=%d",fact);

    return 0;
}