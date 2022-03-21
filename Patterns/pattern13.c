/*
  
  we have to print this message
 1  2  3  4  5 
    2  3  4  5
       3  4  5
          4  5
             5

*/
#include<stdio.h>

int main(){
    int i ,j,a,p=2;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <=5; j++)
        {   
           if (i<=j)
            {
                printf(" %d ",j);
            } 
            else
            printf("   ");
        }
       printf("\n"); 
    }
    
    return 0;
}