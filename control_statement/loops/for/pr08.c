//Armstrong number
#include<stdio.h>
#include<math.h>

int main(){
    int a,rem,sum,num,cude;
    
    for(a=100;a<=408;a++)
    {
      
      num=a;
      sum=0;
      while(num>0)
      {
       rem=num%10;
       
       cude=rem*rem*rem;
       sum= sum + cude;
       num/=10;
      
      }
      
    if (a==sum)
        printf("the armstrong number are:%d\n",a);
        
    }

return 0;
}