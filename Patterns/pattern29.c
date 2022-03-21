/*this is the program that print the pattern given below
          1
        1 2
      1 2 3
    1 2 3 4
  1 2 3 4 5 
    1 2 3 4
      1 2 3
        1 2
          1
          
          */
         #include<stdio.h>

         int main(){
             int i, j ,k=0,a;
             for(i=1;i<=9;i++)
             a=1;
             { if (i<=5)
             {
                 ++k;
             }
             else
             {
                 --k;
             }
             
             
                 for(j=1;j<=5;j++)
                 {
                 
                     if (j>=6-k)
                     {
                         printf(" %d ",a);
                         a++;
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