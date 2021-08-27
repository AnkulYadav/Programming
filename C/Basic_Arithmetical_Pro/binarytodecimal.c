//this is the program that print the binary to decimal
#include<stdio.h>
#include<math.h>
 
int main(){
 int i,n=0,rem,sum=0,b;
 printf("Enter the binary number \n");
 scanf("%d",&i);
 b=i;
 do
 {
    rem=i%10;
    if (rem>1 || rem<0)
    {
        printf("please enter the binary no.\n");
        return;
    }
    
     i/=10;
    sum+=rem*pow(2,n);
    n++; 
 } while (i!=0);
 printf("binary=%i and decimal=%i\n",b,sum);
 
 
return 0;
}