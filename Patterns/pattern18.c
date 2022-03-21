/*
  
  we have to print this message
 5  4  3  2  1 
 5  4  3  2
 5  4  3
 5  4
 5
*/
#include<stdio.h>

int main(){
    int i ,j,a,p=2;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <=5; j++)
        {   
           if (i<=6-j)
           printf(" %d ",6-j); 
            else
            printf("   ");
        }
       printf("\n"); 
    }
    
    return 0;
}