/*to print 
  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5    */
#include<stdio.h>
 
int main(){
    int a;
    for (int i = 1; i <= 5; i++)
    {
        a=1;
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