/*this is the proggram that print the given pattern 
         1
       2 2 2
      3 3 3 3 3
    4 4 4 4 4 4 4 
  5 5 5 5 5 5 5 5 5 
    4 4 4 4 4 4 4
      3 3 3 3 3 
        2 2 2 
          1   
           
        */
       //
       #include<stdio.h>
        
       int main(){
        int i, j, k;
    for(i=1;i<=5;i++)
 {
     for(j=1;j<=9;j++)
     {
         if(j>=6-i && j<=4+i)
         {
             printf(" %d ",i);
         }
         else
         {
             printf("   ");
         }
         
     }
     printf("\n");
 }
 k=4;
 for(i=1;i<=4;i++)
 { 
     for(j=1;j<=9;j++)
     {
         if (j>=1+i && j<=9-i)
         {
             printf(" %d ",k);
         }
         else
         {
             printf("   ");
         }   
         
     }
     printf("\n");
     k--;
 }

return 0;
}