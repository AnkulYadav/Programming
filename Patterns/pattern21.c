/*
   *
  * *
 * * *
* * * *
*/
#include<stdio.h>

int main(){
    int a=1;
    for (int i = 1; i <=4; i++)
    { a=1;
        for (int j = 1; j <= 7; j++)
        {
            
            
            
            if (j>=5-i && j<=3+i && a)
            {
                printf("*",a);
                a=0; 
            }
            else
            {
                printf(" ");
                a=1;
            }
            
        }
        printf("\n");
    }
    
    return 0;

}