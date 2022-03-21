//program to convert binary into decimal
//1st approach
#include<stdio.h>
#include<math.h>

 
int main(){
    int a,rem,b=0,decimal,sum=0,nsave;
    printf("Enter the binary no.\n");
    scanf("%d",&a);
    nsave=a;
    while (a!=0)
    {
       rem=a%2;
       a=a/10; 
       decimal=rem*pow(2,b);
       sum=sum+decimal;
       b++;
    }
    printf("binary number=%d decimal number=%d\n",nsave,sum);
return 0;
}
