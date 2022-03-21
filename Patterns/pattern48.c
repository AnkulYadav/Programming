/*
*   
 *
  *
   *
  *
 *
*
*
 *
  *
   *
  *
 *
*   
 */
#include<stdio.h>

int main(){
    int i, j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1; j<=4;j++)
        {  
            if(i==j)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
        for(i=1;i<=3;i++)
    {
        for(j=1; j<=4;j++)
        {  
            if(j==4-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
        for(i=1;i<=4;i++)
    {
        for(j=1; j<=4;j++)
        {  
            if(i==j)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
          for(i=1;i<=3;i++)
    {
        for(j=1; j<=4;j++)
        {  
            if(j==4-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}