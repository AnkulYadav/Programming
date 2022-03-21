/*THIS IS THE PROGRAM THAT PRINT THE GIVEN PATTERN 
      *      
     * *
    *   *
   *******
  *       *
 *         *  */
      
  #include<stdio.h>

  int main(){
      int i , j;
      for(i=1;i<=7; i++)
      {
          for(j=1;j<=13;j++)
          {
              if((i==4 && j>=4 && j<=10) ||(i==1 && j==7) || (i==2 && j==6) || (i==2 && j==8)|| (i==3 && j==5)|| (i==3 && j==9)|| (i==5 && j==3)|| (i==5 && j==11)|| (i==6 && j==2 )||(i==6 &&j==12))
              printf("*");
              else
              printf(" ");
          }
          printf("\n");
      }
      return 0;
  }  