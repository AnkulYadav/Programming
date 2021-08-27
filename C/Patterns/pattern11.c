/*
  
  we have to print this message
 1  1  1  1  1 
 2  2  2  2
 3  3  3
 2  2
 1
*/
#include<stdio.h>

int main(){
    int i ,j,a,p=2;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <=5; j++)
        {   
            if(i<=3)
               a=i;
            else
            {
             if (i==5 && j==1)
             {
                 p=p+2;
             }
              a=i-p;
            
              
             }
            if (i<=j)
            {
                printf(" %d ",a);
            }
            
        }
       printf("\n"); 
    }
    
    return 0;
}