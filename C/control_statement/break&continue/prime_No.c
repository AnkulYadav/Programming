//program to print prime number 
#include<stdio.h>
 
int main(){
    int i,j,num,count=0;
    for(i=2;i<100;i++)
    {
        count=0;
        for(j=2;j<=100;j++)
        { 
          if (i%j==0)
          {
              ++count;   
              while (count==1)
              {
                  if(i==j)
                  {
                       printf("the prime numbers are:%d\n",j);
                  }
                 break;
            }
       
          }
        }
    }
return 0;
}