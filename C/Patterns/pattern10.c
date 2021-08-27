/*
  
  we have to print this message
 1  1  1  1  1 
 2  2  2  2
 3  3  3
 4  4
 5

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
            
             a=i-p;
            
              
             }
            if (i<=j)
            {
                printf(" %d ",i);
            }
            
        }
       printf("\n"); 
    }
    
    return 0;
}