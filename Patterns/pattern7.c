/*to print 
  5
  5 4
  5 4 3
  5 4 3 2 
  5 4 3 2 1 */
#include<stdio.h>
 
int main(){
    int a;
    for (int i = 1; i <= 5; i++)
    {
       

        for (int j = 1; j<=5; j++)
        { 
          
            a=6-j;
             
            if (j<=i)
            {
                 printf("%d\t",a);
               
            } 
        }
        printf("\n");
        
    }
     
return 0;
}