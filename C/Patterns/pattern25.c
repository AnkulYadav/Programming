/*
this is the program that print the below given pattern 
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        * 
*/
//
#include<stdio.h>
 
int main(){
    int a=9;
 for (int i = 1; i <=5; i++)
 {
     for (int j= 1;j <=9; j++)
     {
         
         if (j>=i && j<=10-i)
         {
           printf(" * ");
         }
         else
         {
             printf("   ");
         }
         
     }
     printf("\n");
     a--;
 }
 
return 0;
}