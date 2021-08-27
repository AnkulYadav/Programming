/*
this is the program that print the pattern given below
 5 4 3 2 1 0 
 4 3 2 1 0
 3 2 1 0
 2 1 0
 1 0
 0*/
 //
 #include<stdio.h>
  
 int main(){
  int i,j,k;
  for(i=0;i<=6;i++)
  {k=6-i;
      for(j=0;j<=6;j++)
      { 
          if (j<=6-i)
          {
              
              printf(" %d ",k);
              k--;
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