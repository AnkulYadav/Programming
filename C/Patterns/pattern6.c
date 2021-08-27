/*to print 
  2
  3 4
  4 5 6 
  5 6 7 8 
  6 7 8 9 10  */
#include<stdio.h>
 
int main(){
    int a=1;
    for (int i = 1; i <= 5; i++)
    {
        
        for (int j = 1; j<=5; j++)
        { 
            if (j<=i)
            {
                 printf("%d\t",a);
                a++;
            }
           
            
          
           
        }
        printf("\n");
        
    }
     
return 0;
}