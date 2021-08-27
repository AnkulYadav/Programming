/*
      *      
     ***
    *****
   *     *
  ***   ***
 ***** *****
*************
*/
#include<stdio.h>

int main(){
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        for(j=1;j<=21;j++)
        {
            if((j>=12-i && j<=10+i))
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
        for ( i = 1; i <=5; i++)
    {
        for(j=1;j<=21;j++)
        {
            if((j>=7-i && j<=5+i)||(j>=18-i && j<=16+i))
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    for(i=1;i<=1;i++)
    for(j=1;j<=22;j++)
     printf("*");
  
    return 0;
}