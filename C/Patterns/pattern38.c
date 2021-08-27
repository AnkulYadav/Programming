/*this is the program that print the following pattern 
             1
           2 3 2                
         3 4 5 4 3
       4 5 6 7 6 5 4
     5 6 7 8 9 8 7 6 5
       4 5 6 7 6 5 4
         3 4 5 4 3
           2 3 2
             1                 
                           */
  //
  #include<stdio.h>
   
  int main(){
   int i ,j ,k;
   for(i=1;i<=5;i++)
   {  k=i;
       for(j=1;j<=9;j++)
       {
           if (j>=6-i && j<=4+i)
           {
               printf(" %d ",k);
               (j>=5)? k--: k++;
           }
           else
           printf("   ");
       }
       printf("\n");
   }
   for(i=1;i<=4;i++)
   {k=5-i;
       for(j=1;j<=9;j++)
       {
           if(j>=1+i && j<=9-i)
           {
           printf(" %d ",k);
           (j>=5)? k--: k++;
           }
           else
           printf("   ");
       }
       printf("\n");
   }
  return 0;
  }                        