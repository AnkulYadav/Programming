/*
  
  we have to print this message
 5  5  5  5  5 
 4  4  4  4 
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
            if (i<=j)
            {
                printf(" %d ",6-i);
            }
            
        }
       printf("\n"); 
    }
    
    return 0;
}