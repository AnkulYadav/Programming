/*this is the program that print the pattern 
  *
  * * 
  * * *
  * * * *
  * * *
  * *
  * 
*/
 #include<stdio.h>
  int main (){
      int i , j, k;
      for ( i = 1; i <=5; i++)
      {  k=i;
         for(j=1;j<=i;j++)
         {
            printf(" * ");
         }
      printf("\n");
      }
      for(i=1;i<=4;i++)
      {
          for(j=1;j<=5-i;j++)
          {
            printf(" * ");
          }
          printf("\n");
      }
      return 0;
  }