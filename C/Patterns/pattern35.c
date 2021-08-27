/*this is the program that print the given pattern 
             *
          *  *  *
       *  *  *  *  *
    *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *
    *  *  *  *  *  *  *
       *  *  *  *  *
          *  *  *
             *
*/
#include<stdio.h>
 
int main(){
 int i ,j;
 for(i=1;i<=5;i++)
 {
     for(j=1;j<=9;j++)
     {
         if(j>=6-i && j<=4+i)
         {
             printf(" * ");
         }
         else
         {
             printf("   ");
         }
         
     }
     printf("\n");
 }
 for(i=1;i<=4;i++)
 {
     for(j=1;j<=9;j++)
     {
         if (j>=1+i && j<=9-i)
         {
             printf(" * ");
         }
         else
         {
             printf("   ");
         }   
         
     }
     printf("\n");
 }

return 0;
}