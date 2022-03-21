/*this is the program that print the pattern 
         1
       1 2 3
     1 2 3 4 5 
   1 2 3 4 5 6 7 
 1 2 3 4 5 6 7 8 9
   1 2 3 4 5 6 7
     1 2 3 4 5 
       1 2 3 
         1
         
         */
//
#include<stdio.h>
 
int main(){
 int i,j,k,a;
 for(i=1;i<=5;i++)
 {k=1;
     for(j=1;j<=9;j++)
     {
         if (j>=6-i && j<=4+i)
         {
             printf(" %d ",k++);
         }
       else{
           printf("   ");
       }  
     }
     printf("\n");
 }
 
 for(i=1;i<=4;i++)
 { k=1;
     for(j=1;j<=9;j++)
     {
         if (j>=1+i && j<=9-i)
         {
             printf(" %d ",k++);
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
