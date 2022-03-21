//
#include<stdio.h>
 int display(int );
 int sum(int );
int main(){
 int a;
 printf("Enter the number.\n");
 scanf("%d",&a);
 
 printf("=%d",sum(a));
//  if (a<0)
//  {
//    printf("Please Enter the +ve no.\n");
//  }
//  else
//  {
    //  printf("%d",display(a));
//  }
 
 
return 0;
}

// int sum(int a)
// {
//     if ( a==0)
//     {
//        return 0;
//     }
//     return  a + sum(a-1);
//     printf("%d +",a);
    
// }
int sum (int a)
{
    int su;
    if (a==0)
    {
        return 0;
    }
    su=a+ sum (a-1);
    printf("%d +",a);
    return su;

    
}