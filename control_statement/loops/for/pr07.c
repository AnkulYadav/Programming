//Armstrong number
#include<stdio.h>
#include<math.h>

int main(){
    int a,rem,sum=0,z;
    printf("Enter the number\n");
    scanf("%d",&a);

    for(;a>0;a/=10)
    {
      rem=a%10;
      
      sum+=pow(rem,3);
    }
    if (sum==a)
    {
        printf("the number is a armstrong number \n");
    }
    else
    {
        printf("The number is not a armstorng number \n");
    }
return 0;
}

