//program to find greatest in four numbers enter by user
#include<stdio.h>
 
int main(){
    long long i,sum=0,n;
    printf("enter the number");
    scanf("%d",&n);
    for (i=1; i< n; i++) 
    {
       if (i%3==0 || i%5==0) 
       {
         sum+=i;
       }
    }
    printf("%d\n",sum);
return 0;
}