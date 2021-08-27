//
#include<stdio.h>
 int reverse(int a);

int main(){
 int a;
 printf("Enter the number.\n");
 scanf("%d",&a);
 reverse(a);
 if(a==reverse(a))
   printf(" It is a palidrome number.\n");
   else
   printf("It is not a palidrome number.\n");
return 0;
}
int reverse (int x)
{
    int rem,sum=0;
    do{
        sum=sum*10+x%10;
        x/=10;
    }while(x>0);
    return sum;
}