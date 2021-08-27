/*to print 
  *
  *  *
  *  *   *
  *  *   *   *
  *  *   *   *   *     */
#include<stdio.h>
 
int main(){
    
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j<=5; j++)
        {
            if (j<=i)
            {
                 printf("*\t");   
            }
        }
        printf("\n");    
    }
return 0;
}