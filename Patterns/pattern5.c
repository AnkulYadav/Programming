/*to print 
  1
  0  1
  1  0  1
  0  1  0  1
  1  0  1  0  1 */
#include<stdio.h>
 
int main(){
    int a=1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j<=5; j++)
        { 
            if ((i+j)%2==0)
                a=1;
            else
                a=0;
            if (j<=i)
                 printf("%d\t",a);
        }
        printf("\n");  
    }
return 0;
}