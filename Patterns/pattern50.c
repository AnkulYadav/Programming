/*                 1 
                2  3  2
             3  4  5  4  3
          4  5  6  7  6  5  4

          */
#include<stdio.h>
 
int main(){
    int p,j;
 for (int i =1; i <=4; i++)
 {
    for ( j = 1; j <=7-i; j++)
     printf("   ");
     p=i;
     for ( j = 1; j<=i; j++)
      printf(" %d ",p++);
      p=p-2;
      for(j=1;j<=i-1;j++)
      printf(" %d ",p--);
      printf("\n");
     

 }
 
return 0;
}