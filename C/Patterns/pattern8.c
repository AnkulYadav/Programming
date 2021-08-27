/*to print 
  5
  4 4
  3 3 3 
  2 2 2 2
  1 1 1 1 1 */
#include<stdio.h>
 
int main(){
    int a=5;
    for (int i = 1; i <= 5; i++)
    {
       

        for (int j = 1; j<=5; j++)
        { 
          
            
             
            if (j<=i)
            {
                 printf("%d\t",a);
               
            } 
        }
        printf("\n");
        a--;
    }
     
return 0;
}
