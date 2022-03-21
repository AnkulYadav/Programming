//
#include<stdio.h>
#include<math.h>
 int isprime(int a);

int main(){
 int a,c ;
 printf("Enter the number .\n");
 scanf("%d",&a);
 c=isprime(a);
 printf("%d",c);
return 0;
}
int isprime (int x)
{
    int i;
    for(i=2;i<sqrt(x);i++)
    { 
        if(x%i==0)
          return 0;
          else
          return 1;
        
    }
}